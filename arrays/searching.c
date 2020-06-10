#include<stdio.h>
int search(int *arr,int key,int n){
    int i;
    for(i=0;i<n;i++){
        if(*arr==key){
            return i;
        }
        arr++;
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
int j=search(p,key,n);
if(j!=-1){
    j++;
    printf("element found at %d",j);
}
else{
    printf("element not found");
}
}
