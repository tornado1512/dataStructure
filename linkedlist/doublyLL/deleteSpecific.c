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

void deleteSpecific(){
    int pos,i=1;
    printf("enter position");
    scanf("%d",&pos);
    struct node *p=root,*q=root;
    if(pos>length()){
        printf("invalid position");
    }
    else{
        while(i<pos-1){
            p=p->rtr;
            i++;
        }
        q=p->rtr;
        p->rtr=q->rtr;
        q=q->rtr;
        q->ltr=p;
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
int main(){
    int n;
    printf("enter size of LL");
    scanf("%d",&n);
    while(n--){
        begin();
    }
    printf("Length of DLL is :%d\n",length());
    display();
    printf("After deleting first element\n");
    deleteSpecific();
    display();
}




