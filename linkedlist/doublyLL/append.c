#include<stdio.h>
struct node{
    int data;
    struct node *ltr;
    struct node *rtr;
};
struct node *root=NULL;
void append(){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&temp->data);
    temp->ltr=NULL;
    temp->rtr=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        struct node *p=root;
        while(p->rtr!=NULL){
            p=p->rtr;
        }
        p->rtr=temp;
        temp->ltr=p;
    }
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
int main(){
    int n;
    printf("enter size of LL");
    scanf("%d",&n);
    while(n--){
        append();
    }
    display();
}
