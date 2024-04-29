#include<stdio.h>
#include<string.h>
int main () {

    system ("color 0a");


char c[40];
printf("Enter a Word:");
scanf("%s",&c);


printf("The Word In Reverse order  : %s ",strrev(c));

return 0 ;

}
