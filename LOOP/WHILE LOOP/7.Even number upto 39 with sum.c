#include<stdio.h>
int main(){
system("color 0A");
int sum=0,N=2,count=1;
  printf("Even number are\n");
while(count<=39)

{

     printf("%d\n",N);
     count++;
     sum+=N;
     N+=2;


}
printf("The sum of the even number is %d \t ",sum);
return 0;
}

