#include<stdio.h>
int main(){

int i,j,space,k,norow;
printf(" Enter the number of rows.");
scanf("%d",&norow);

for(i=1; i<=norow;i++)
{


    for(space=1;space<=(norow-i);space++)
        {
        printf(" ");
        }
    for(j=1;j<=((2*i)-1);j++){
        printf(".");
    }
    printf("\n");
    }






return 0;
}
