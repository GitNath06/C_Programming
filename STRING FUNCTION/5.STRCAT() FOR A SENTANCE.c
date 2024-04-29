
#include<stdio.h>
#include<string.h>
int main () {

    system ("color 0a");

    char a[20],b[20];

    printf("Enter any two Sentences");
    gets(a);
    gets(b);

    printf("The concatination of two sentence is  : %s ",strcat(a,b));
return 0 ;

}
