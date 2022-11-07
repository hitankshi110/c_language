#include<stdio.h>

void main() {

    char birds='P';

    printf("Enter your birds char: ");
    scanf(" %c", &birds);

    switch(birds) {

    case'P':
        printf("It is a Peacock \n");
        break;

    case'E':
        printf("It is an Eagle \n");
        break;

    case'S':
        printf("It is a Swan \n");
        break;

    case'F':
        printf("It Is a Flamingo \n");
        break;

    case'H':
        printf("It is a Hummingbird \n");
        break;

    default:
        printf("It is a Bird \n");

    }

}
