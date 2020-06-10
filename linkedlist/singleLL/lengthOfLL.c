#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node *root=NULL;
void append(){
    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nenter element:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }else{
        struct node *p;
        p=root;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }
}
int length(){
    int count=0;
    struct node*temp=root;
    while(temp->link!=NULL){
        count++;
        temp=temp->link;
    }
    return ++count;
}
int main(){
append();
char repli;
do{
append();
printf("wants to enter more element press 'y'");
repli=getch();
}while(repli=='y');

int l=length();
printf("length is :%d",l);
/*
struct node *p=root;
while(p->link!=NULL){
    printf("element is =%d\n",p->data);
    p=p->link;
}*/
}
