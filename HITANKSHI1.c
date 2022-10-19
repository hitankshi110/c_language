// Online C compiler to run C program online
#include <stdio.h>

void main() {

    // OPERATORS

    // 1 ASSIGNMENT
    // 2 ARTHEMETIC
    // 3 INCREMENT & DECREMENT
    // 5 RELATIONAL
    // 4 LOGICAL
    // 6 BITWISE

    // 1. ASSIGNMENT

    // = , += , -= ,*= , /= , %=

    int num1 = 12;

    num1 %= 5;  // num1 = num1 % 5;

    // printf("%d\n",num1);

    // 2. ARTHEMETIC
    // + - * / %

    int x =2,y=8;

    int z = x + y;

    // printf("%d\n",z);



    // 3. INCREMENT AND DECREMENT

    int a = 5,b= 9;

    a--;

    // printf("%d",a);


    // 4. RELATIONAL

    /*
    <  less than,
    >  greater than,
    == equal to ,\
    !=  not equal to,
    <=  less than or equal to,
    >=  greater than or equal to

    */
    x = 2;
    y = 5;

    // true = 1
    // false = 0

    z = x <= y;   // 2 <= 5
    z =  x >= 3;

    // printf("%d",z);


    // 5. LOGICAL

    /*

    &&    AND
    ||    OR
    !     NOT

    */
    int w = 45;
    x = 7;
    y = 9;
    z = x > y;

    int result = !(x > z) && x > 6 && !(y > z) || !(x > y) &&  (w < y) || !(y > z));


    printf("%d",!result);













}
