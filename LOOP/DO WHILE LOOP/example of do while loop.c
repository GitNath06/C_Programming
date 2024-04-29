#include<stdio.h>
int main ()

{

    system("color 0c");
    int o=1,count=1,n;

     printf("Enter the number the terms:");
     scanf("%d",&n);

     do {

        printf(" %d\t",o);
        o=o+2;
        count++;

     }
    while(count<=n);



    return 0;



}
