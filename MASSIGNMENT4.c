#include<stdio.h>

void main() {

    char day='M';

    printf("Enter your day char:");
    scanf(" %c", &day);

    switch(day) {

    case'M':
        printf("Monday \n");
        break;

    case'T':
        printf("Tuesday \n");
        break;

    case'W':
        printf("Wednesday \n");
        break;

    case't':
        printf("Thursday \n");
        break;

    case'F':
        printf("Friday \n");
        break;

    case'S':
        printf("Saturday \n");
        break;


    default:
        printf("Sunday \n");

    }

}
