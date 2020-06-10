#include<stdio.h>
int main(){
    int arr[20],n,i,j,temp,k;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(k=0;k<n;k++)
            printf("%d ",arr[k]);
}
