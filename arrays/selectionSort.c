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
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                for(k=0;k<n;k++)
                printf("%d ",arr[k]);
            }
            printf("\n");

        }
    }
}

