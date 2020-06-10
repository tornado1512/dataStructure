#include<stdio.h>
#include<stdlib.h>
struct Emp {
    int eid;
    char ename[20];
    float esal;
};
int main(){
    struct Emp *ptr;
    ptr=(struct Emp *)malloc(sizeof(struct Emp));
    if(ptr==NULL){
      printf("memory allocation fails");
    }
    else{
        printf("Enter employee details");
        scanf("%d%s%f",&ptr->eid,ptr->ename,&ptr->esal);
        printf("Ename:%s\nEid:%d\nEsal:%f",ptr->ename,ptr->eid,ptr->esal);
    }

}
