#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *root=NULL;
void begin();
void sort();
int length();
void display();
int main(){
    int n,i;
    printf("enter size of LL");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        begin();
    }
    printf("LL Before sort\n");
    display();
    sort();
    printf("LL After sort\n");
    display();
}
void begin(){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    printf("\nenter Element:");
    scanf("%d",&temp->data);
    if (root==NULL){
        root=temp;
    }else{
        struct node *p;
        temp->link=root;
        root=temp;
    }
}
void sort(){
    struct node *p,*q;
    p=root;
    int temp;
    while(p!=NULL){
      q=p->link;
      while(q!=NULL){
        if(p->data>q->data){
            temp=p->data;
            p->data=q->data;
            q->data=temp;
        }
        q=q->link;
      }
      p=p->link;
    }

}
void display(){
    if(root==NULL){
        printf("List is empty\n");
    }
    else{
        struct node *p;
        p=root;
        while(p->link!=NULL){
            printf("Element is:%d\n",p->data);
            p=p->link;
        }
        printf("Element is:%d\n",p->data);
    }
}
int length(){
    struct node*p;
    int count=0;
    if(root==NULL){
        printf("LL is Empty\n");
    }
    else{
        p=root;
        while(p->link!=NULL){
            count++;
            p=p->link;
        }
    }
  return ++count;
}

