#include<stdio.h>
int bsearch(int arr[],int key,int n){
    int i;
    int l=0;
    int h=n;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
int main(){
int i,key,arr[10],n,*p;
printf("enter size of array");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter element to be search");
scanf("%d",&key);
p=arr;
int j=bsearch(arr,key,n);
if(j!=-1){
    j++;
    printf("element found at %d",j);
}
else{
    printf("element not found");
}
}
