#include<stdio.h>
#include<stdlib.h>
/*structure declaration*/
struct node{
    int data;
    struct node *link;
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
        printf("7.Delete Specific\n");
        printf("8.Reverse a LinkList");
        printf("9.Quit\n");
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
            case 10:t=quit();
            break;
            default:printf("Invalid choice");
            break;

        }
    }
}
/*defination of begin */
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
/*defination of after */
void after(){
    printf("enter position");
    int pos,i=1;
    scanf("%d",&pos);
    if(pos>length()){
        printf("invalid position\n ");
    }else{
        struct node *temp=(struct node*)malloc (sizeof(struct node));
        temp->link=NULL;
        printf("enter element:");
        scanf("%d",&temp->data);
        struct node*p=root,*q;

        if(pos==1){
            temp->link=root;
            root=temp;
        }
        else{
            pos--;
            while(--pos){
                p=p->link;
            }
            q=p->link;
            p->link=temp;
            temp->link=q->link;
        }

    }
}
/*defination of end */
void end(){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    printf("\nenter Element:");
    scanf("%d",&temp->data);
    if (root==NULL){
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
/*defination of display */
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
/*defination of length */
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
/*defination of deleteFirst */
void deleteFirst(){
    if(root==NULL){
        printf("LL is empty");
    }
    else{
        root=root->link;
    }
}
/*defination of deleteLast */
void deleteLast(){
    int i=1;
    if(root==NULL){
        printf("empty LL");
    }else{
        int len=length();
        struct node *p=root;
        while(i<(len-1)){
            p=p->link;
            i++;
        }
        p->link=NULL;
    }
}
/*defination of deleteSpecific */
void deleteSpecific(){
    int pos,i=1;
    printf("enter position:");
    scanf("%d",&pos);
    if(root==NULL){
        printf("LL is empty");
    }
    else{
        if(pos>length()){
            printf("Invalid position");
        }
        else{
            struct node *p=root,*q;
            while(i<pos-1){
                p=p->link;
                i++;
            }
            q=p->link;
            p->link=q->link;


        }
    }
}
/*defination of reverse */
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
/*defination of quit */
int quit(){
   return 0;
}
