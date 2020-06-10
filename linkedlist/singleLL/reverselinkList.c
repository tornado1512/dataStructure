#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *root=NULL;
void begin();
void reverse();
int length();
void display();
int main(){
    int n,i;
    printf("enter size of LL");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        begin();
    }
    printf("LL Before reverse\n");
    display();
    reverse();
    printf("LL After reverse\n");
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
void reverse(){
    struct node *p,*q;
    p=q=root;
    int i=1,len=length(),j=1,temp;
    while(j<=(len/2)){
        i=1;
        p=root;
        while(i<=len-j){
            p=p->link;
            i++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        j++;
        q=q->link;
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
