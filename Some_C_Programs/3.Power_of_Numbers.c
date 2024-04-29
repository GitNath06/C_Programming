#include<stdio.h>
int main(){
int n,pow,m,i;
long long int result=1;// why m = 1 ? --> because if m = 0 then anything multiplied to the m become 0 so,.

// long long int is used when the data is too long...
//it is most important for interview questions

printf("Enter the number and the power of the number ");
scanf("%d%d",&n,&m);

for(i=1;i<=m;i++){
    result=result*n;
}
printf("%lld",result);
return 0 ;



}
