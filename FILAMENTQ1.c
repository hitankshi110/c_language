#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str,100,stdin);


    if(str)
        printf("String is Palindrome! ");
    else
        printf("String is not Palindrome! ");

}
