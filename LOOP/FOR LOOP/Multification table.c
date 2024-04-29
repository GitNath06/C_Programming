#include<stdio.h>
int main(){

system("color 09");
int n,M=0,choice;
printf("Enter the number for which do you want the multiplication :");
scanf(" %d",&choice);

for(n=1;n<=10;n++)
{
    M=M+choice;
    printf("%d*%d=%d \n",choice,n,M);

}

return 0;

}
