#include<stdio.h>
int main(){

int n,c=0,i=1;
char rem;

printf("Enter the Numbers digits ");
scanf("%d",&n);
if(n==0){

printf("\n The total number of digit is 1");

}
else{
while(n!=0)
    {
   n=n/10;
    c++;

}

printf("\nThe total number of digit is %d",c);}


return 0;
}


