#include<stdio.h>

void main()
{
    int i=1,rev=0;

    while(i>0){
        for(int j=i;j>=1;j--){
            printf("%d", j);
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
