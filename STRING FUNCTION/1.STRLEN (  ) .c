#include<stdio.h>
#include<string.h>
int main () {

    system ("color 0a");


char c[40];
int length;
printf("Enter a Word.(with no-space):");

scanf("%s",&c);


length = strlen(c);

printf("The length of the Word: %d ",length);

return 0 ;

}
