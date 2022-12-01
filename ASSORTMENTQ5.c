#include<stdio.h>

void main()
{
    int x[3][3], y[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter x[%d][%d]: ", i,j);
            scanf("%d", &x[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            y[i][j]=x[j][i];
        }
    }

    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d", y[i][j]);
            }
            printf("\n");

    }
}
