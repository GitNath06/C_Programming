#include<stdio.h>
int main(){
    system("color f0");


int n,count,E=2,sum=0;
printf("Enter total number of term ;");
scanf("%d",&n);

for(count=1;count<=n; count++)
{
    printf("%d \t\n",E);
    sum=sum+E;
    E=E+2;

}
 printf("the total sum is %d \n",sum);
 return 0;

}
