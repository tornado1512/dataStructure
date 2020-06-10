#include<stdio.h>
int main(){
    int i,j,arr[10],d,n,b[10],k;
    printf("enter size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter position to rotate");
    scanf("%d",&d);

    for(i=0;i<d;i++){
        b[i]=arr[i];
    }
    for(i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    i=i-d;
     for(j=i,k=0;j<n;j++,k++){
        arr[j]=b[k];

    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }


}
