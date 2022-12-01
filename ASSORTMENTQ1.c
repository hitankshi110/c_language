#include<stdio.h>

void main()
{
    int x[3][3]={
        {-1,1,2},
        {3,-2,1},
        {4,2,-3}

        };

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j){
                    printf("%d", x[i][j]);
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
}








