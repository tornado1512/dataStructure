#include<stdio.h>
void insert(int arr[],int key,int n,int loc){
    int i;
    for(i=n;i>loc;i--){
        arr[i+1]=arr[i];
    }
    arr[i]=key;
}
int main(){
int i,key,arr[10],n,*p,loc;
printf("enter size of array");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter element to be insert");
scanf("%d",&key);
printf("enter place to be insert");
scanf("%d",&loc);
printf("Array before insertion");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);

}

insert(arr,key,n,loc);
printf("Array After insertion");
n++;
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);

}

}

