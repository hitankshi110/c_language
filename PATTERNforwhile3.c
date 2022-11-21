#include<stdio.h>

void main()
{
    int i=1, rev=0;
    while(i>0){

    int j=1, rev2=0;
    while(j>0){

            if(i+j<=6){
                printf("%d", j);
            }else{
                printf(" ");
            }
            if(j<5&&rev2==0){
                j++;
            }else{
            }
            if(rev2==0){
                j++;
            }else{
            rev2=1;
            j--;
            }
            }
            if(i<5&&rev==0){
                i++;
            }else{
                rev=1;
                i--;
            }
            printf("\n");
    }
}

