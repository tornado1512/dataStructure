#include<stdio.h>
void delet(int arr[],int n,int loc){
    int i;
    loc++;
    for(i=loc;i>n-1;i++){
        arr[i]=arr[i+1];
    }

}
int main(){
int i,key,arr[10],n,*p,loc;
printf("enter size of array");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter elements place  to be delete");
scanf("%d",&key);
printf("Array before deletion");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);

}

delet(arr,n,loc);
printf("Array After insertion");
n--;
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);

}

}



