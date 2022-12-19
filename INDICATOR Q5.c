#include<stdio.h>

void add_sub(int a, int b, int * add, int * sub){
    *add=a+b;
    *sub=a-b;
}
void main()
{
    int add_ans;
    int sub_ans;
    add_sub(9,5,&add_ans, &sub_ans);

    printf("add %d, sub %d", add_ans, sub_ans);

}
