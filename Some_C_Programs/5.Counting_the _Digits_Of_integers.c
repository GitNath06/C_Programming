#include<stdio.h>
int main(){
    system("color 80");

int n,c=0;
printf("Enter a Integer value:");
scanf("%d",&n);


while(n != 0){

    n=n/10;

    c++;


//while(n > 0){
//
//    n=n/10;
//
//    c++;
//
//    if(n==0){
//        break;
//    }




}

printf("The total number of digit of Integer is %d ",c);







return 0;
}
