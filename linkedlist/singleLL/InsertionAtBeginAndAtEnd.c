#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *root=NULL;
void append(){
    int n;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter element to insert");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }else{
        struct node *p;
        p=temp;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }

}
int main(){
append();
printf("element at root=%d",root->data);
char repli;
do{

append();
printf("wants to enter more element press 'y'");
repli=getch();
}while(repli=='y');
/*
struct node *p=root;
while(p->link!=NULL){
    printf("element is =%d\n",p->data);
    p=p->link;
}*/
}
