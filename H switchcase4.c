#include<stdio.h>

void main() {

    char festival='D';

    printf("Enter your festival char:");
    scanf(" %c",&festival);

    switch(festival) {

    case 'D':
        printf("This is Diwali \n");

        break;

    case 'H':
        printf("This is Holi \n");

        break;

    case 'U':
        printf("This is Uttarayan \n");

        break;

    case 'J':
        printf("This is Janmashtmi \n");

        break;

    case'C':
        printf("This is Christmas\n");

        break;

    default:

        printf("This is a festival \n");


    }


}
