#include<stdio.h>

void main() {


    char animals='D';

    printf("Enter your animal char: ");
    scanf(" %c", &animals);

    switch(animals) {

    case'D':
        printf("It is a Dog \n");
        break;

    case'C':
        printf("It is a Cat \n");
        break;

    case'T':
        printf("It is a Tiger \n");
        break;

    case'H':
        printf("It is a Horse \n");
        break;

    case'R':
        printf("It is a Rabbit \n");
        break;

    default:
        printf("It is an animal \n");

    }


}
