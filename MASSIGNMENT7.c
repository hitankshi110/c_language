#include<stdio.h>

void main() {

    int sub1=60, sub2=80, sub3=90, marks, total_score;
    int percentage;

    marks=230;
    total_score=300;

    percentage=marks/total_score*100;



   if(percentage>70<=80) {

        printf("Your grade is B+ \n");




    }else if(percentage>80<=90) {

        printf("Your grade is A \n");




    }else if(percentage>90<=100) {

        printf("Your grade is A+ \n");
    }


}
