#include<stdio.h>
#include<string.h>
int main () {

    system ("color 0a");


char c[40];
printf("Enter a Sentence :");

gets(c);


printf("The Sentence In Lower case : %s ",strlwr(c));

return 0 ;

}
