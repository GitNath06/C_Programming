
#include<stdio.h>
#include<string.h>
int main () {

    system ("color 0a");

    char a[20],b[20];

    printf("Enter any two Word:");
    scanf("%s%s",&a,&b);

    printf("The concatination of two word is : %s ",strcat(a,b));
return 0 ;

}
