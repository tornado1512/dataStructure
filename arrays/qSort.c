#include<stdio.h>
void qSort(int arr[],int low,int high){
    int i,j,key,temp;
    if(low<high){
        key=low;
        i=low;
        j=high;

        while(i<j){
            while(arr[key]>=arr[i]&&i<high){
                i++;
            }
            while(arr[key]<arr[j]){
                j--;
            }
            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[key];
        arr[key]=arr[j];
        arr[j]=temp;
        qSort(arr,low,j-1);
        qSort(arr,j+1,high);

    }
}
int main(){
int i,j,arr[10],key,n;
printf("enter size");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
qSort(arr,0,n-1);
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}

