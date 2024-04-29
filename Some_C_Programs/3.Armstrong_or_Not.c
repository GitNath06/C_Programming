#include<stdio.h>
int main(){

int n,cpy,rem,arm=0;

printf("Enter the number to check whether it is arm strong or not:\n ");
scanf("%d",&n);

cpy=n;
while(cpy !=0){
    rem=cpy%10;
    arm=(rem*rem*rem)+arm;
    cpy/=10;

}
if(arm == n){
    printf("%d is a armstrong number\n ",n);
}

else{
    printf("%d is not a armstrong number\n",n);
}



return 0;
}
