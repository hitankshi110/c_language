#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter str : ");
    fgets(str, sizeof(str), stdin);

    puts(str);
    printf("%d", strlen(str));


}
