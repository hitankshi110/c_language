#include<stdio.h>

void main()
{
    int A[2][2]={
           {1,2},
           {4,5}
          };

   int  B[2][2]={
       {4,5},
       {2,1}
   };

   int z[2][2] = {
       {A[0][0]+B[0][0],A[0][1]+B[0][1]},
       {A[1][0]+B[1][0],A[1][1]+B[1][1]}
   };


        printf("%d\t%d\n %d\t%d\n", z[0][0],z[0][1],z[1][0],z[1][1]);


}


