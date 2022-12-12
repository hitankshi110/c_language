#include<stdio.h>

void display();
int add(int x, int y);

void main()
{
    int name=add(4,5);
    display(name);

}
    int add(int x, int y){
    return x+y;

}
    void display(int name){
    printf("%d", name);

}
