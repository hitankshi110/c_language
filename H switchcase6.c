#include<stdio.h>

void main() {

    int num1, num2, ans;

    printf("Enter num1, num2:");
    scanf("%d %d", &num1, &num2);

    ans=num1+num2;

    if(ans>=10) {

            if(ans>=100) {

                printf("ans is triple digit");


            }
            printf("ans is double digit");




           }else if(ans>0) {



                printf("ans is single digit and +");




            }else{

            printf("ans is -");

        }



    }










