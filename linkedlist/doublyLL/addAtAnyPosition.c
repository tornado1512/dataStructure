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
void after(){
    int pos;
    printf("enter position");
    scanf("%d",&pos);
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->rtr=NULL;
    temp->ltr=NULL;
    printf("Enter element");
    scanf("%d",&temp->data);
    if(pos>length()){
        printf("invalid position");
    }
    else{

        struct node *p=root;
        int i=1;
        while(i<pos-1){
            p=p->rtr;
            i++;
        }
        temp->rtr=p->rtr;
        temp->ltr=p;
        p->rtr=temp;
        p=temp->rtr;
        p->ltr=temp;
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
        begin();
    }
    after();
    display();
}


