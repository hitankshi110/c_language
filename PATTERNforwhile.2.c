#include<stdio.h>

void main()
{
    int i=1, rev=0;

    int count=1;
    while(i>0){

        count=1;
        for(int j=1;j<=5;j++){
            if(i+j>=6){
                printf("%d", rev==0?count:j);
                count++;
            }else{
                printf(" ");
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



