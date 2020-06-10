#include<stdio.h>

int main(){
    int arr[10],i,n,temp,start=0,end;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array element");
    end=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(start<end){
        temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        start++;
        end--;
    }

     for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}
