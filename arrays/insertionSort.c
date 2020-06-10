#include<stdio.h>
int main(){
int i,j,arr[10],key,n;
printf("enter size");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0&&key<arr[j]){
        arr[j+1]=arr[j];
        j-=1;
    }
    arr[j+1]=key;
}
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
