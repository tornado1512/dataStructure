#include<stdio.h>
void change(int *a){
    *a++;
}
int main(){
    int a=10,*p;
    p=&a;
    change(p);
    printf("%d",a);
}
