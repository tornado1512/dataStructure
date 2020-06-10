//Greatest comman divisior withour recursion
#include<stdio.h>
#include<conio.h>
int main(){
    int m,n,a[5],b[5],i,k=0,count1=0,count2=0;
    printf("enter a,b");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++){
        if(m%i==0){
            a[k]=i;
            k++;
            count1++;
        }
    }
    for(i=1;i<=n;i++){
        if(n%i==0){
            b[k]=i;
            k++;
            count2++;
        }
    }
    for(i=1;i<=count1;i++){
        printf("%d\t",a[i]);
    }
    for(i=1;i<=count2;i++){
        printf("%d\t",b[i]);
    }
return 0;
}
