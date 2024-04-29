#include<stdio.h>
#include<string.h>
int main(){

char a[20];
printf("Enter any Word:");
scanf("%s",&a);


if(strrev(a) == a ){
    printf("%s is a palindrome:" ,a);

}

else {



   printf("%s is not a palindrome:" ,a);


}
return 0;

}
;
