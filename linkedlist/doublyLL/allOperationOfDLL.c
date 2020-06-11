#include<stdio.h>
#include<stdlib.h>
/*structure declaration*/
struct node{
    int data;
    struct node *ltr;
    struct node *rtr;
};
struct node *root=NULL;
/*All functions prototype*/
void begin();
void after();
void end();
int length();
void display();
void deleteFirst();
void deleteLast();
void deleteSpecific();
void reverse();
void sort();
int quit();
/*Start of main function*/
int main(){
    int t=1;
    while(t==1){
        printf("enter your choice\n");
        printf("1.Add at begin\n");
        printf("2.Add at After\n");
        printf("3.Add at end\n");
        printf("4.Find length\n");
        printf("5.Display\n");
        printf("6.Delete First\n");
        printf("7.Delete Last\n");
        printf("8.Delete Specific\n");
        printf("9.Reverse a LinkList\n");
        printf("10.Sort a LinkList\n");
        printf("11.Quit\n");
        int i;
        scanf("%d",&i);
        switch(i){
            case 1:begin();
            break;
            case 2:after();
            break;
            case 3:end();
            break;
            case 4:printf("Length of LL is :%d\n",length());
            break;
            case 5:display();
            break;
            case 6:deleteFirst();
            break;
            case 7:deleteLast();
            break;
            case 8:deleteSpecific();
            break;
            case 9:reverse();
            break;
            case 10:sort();
            break;
            case 11:t=quit();
            break;
            default:printf("Invalid choice");
            break;

        }
    }
}
/*defination of begin */
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
/*defination of display */
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
/*defination of end */
void end(){
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
/*defination of length */
int length(){
    struct node *p=root;
    int count=0;
    while(p!=NULL){
        p=p->rtr;
        count++;
    }
    return count;
}
/*defination of after */
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
/*defination of deleteFirst */
void deleteFirst(){
    if(root==NULL){
        printf("empty  DLL");
    }else{
        struct node *p=root;
        root=p->rtr;
        p->ltr=NULL;
    }
}
/*defination of deleteLast */
void deleteLast(){
    if(root==NULL){
        printf("empty  DLL");
    }else{
        struct node *p=root,*q=NULL;
        while(p!=NULL){
            q=p->ltr;
            p=p->rtr;
        }
        q->rtr=NULL;
    }
}
/*defination of deleteSpecific */
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
/*defination of reverse */
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
/*defination of sort */
void sort(){
    struct node *p=root,*q=root;
    int temp;
    while(p->rtr!=NULL){
        q=p->rtr;
        while(q!=NULL){
            if(p->data>q->data){
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->rtr;
        }
        p=p->rtr;
    }
}
/*defination of quit */
int quit(){
   return 0;
}
