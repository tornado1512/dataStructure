#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *ltr;
    struct node *rtr;
};
struct node *root=NULL;
void begin(){
     struct node *temp=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&temp->data);
    temp->ltr=NULL;
    temp->rtr=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
            root->ltr=temp;
            temp->rtr=root;
            root=temp;
    }
}
int length(){
    struct node *p=root;
    int count=0;
    while(p!=NULL){
        p=p->rtr;
        count++;
    }
    return count;
}
void display(){
    if(root==NULL){
        printf("LL is empty");
    }
    else{
        struct node *p=root;
        while(p!=NULL){
            printf("element is : %d\n",p->data);
            p=p->rtr;
        }
    }

}
void reverse(){
    struct node *p=root,*q=root;
    int temp,i=1,len=length();
    while(p->rtr!=NULL){
        p=p->rtr;
    }
    while(i<(len/2)){

        temp=p->data;
        p->data=q->data;
        q->data=temp;

        q=q->rtr;
        p=p->ltr;
        i++;
    }
}
int main(){
    int n;
    printf("enter size of LL");
    scanf("%d",&n);
    while(n--){
        begin();
    }
    printf("Length of DLL is :%d\n",length());
    display();
    reverse();
    display();
}


