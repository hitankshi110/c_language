#include<stdio.h>

void main()
{
    char msg[100];

    printf("Enter msg: ");
    fgets(msg,sizeof(msg),stdin);

    puts(msg);

    printf("%d", strlen(msg));

}


