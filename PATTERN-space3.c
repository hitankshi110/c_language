#include<stdio.h>

void main()
{
    for(int i=5;i>=1;i++){
            int count=5;
        for(int j=1;j<=5;j--){
                if(i<=j){
                printf("%d", count);
                count++;

                }else{
                    printf(" ");
                }


            }

        printf("\n");
    }
    }

