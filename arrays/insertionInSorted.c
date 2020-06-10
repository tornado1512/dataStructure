#include<stdio.h>
int main()
{
int arr[10],n,i,j,key;
printf("enter size");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter element");
scanf("%d",&key);

for(i=0;i<n;i++){
    if(key>=arr[i]&&key<arr[i+1]){
        i++;
        break;
    }
    else if(key<arr[i]&&key<arr[i+1]){
        break;
    }
}


for(j=n;j>i;j--){
    arr[j]=arr[j-1];
}
arr[j]=key;
n++;
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
}

