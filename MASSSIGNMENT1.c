#include<stdio.h>

void main() {

    char word='A';

    printf("Enter your word char:");
    scanf(" %c", &word);


    switch(word) {

    case'A':
        printf("This is an alphabet \n");
        break;

    case'0':
        printf("This is a digit \n");
        break;

    case'*':
        printf("This is a special character \n");
        break;

    default:
        printf("This is a Character \n");

    }

}
