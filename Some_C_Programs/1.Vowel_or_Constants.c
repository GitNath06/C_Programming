#include<stdio.h>
int main(){

char c ;
printf("Enter any Alphabets:");
scanf("%c",&c);



if(c=='a' ||c=='u' ||c=='e' ||c=='i' ||c=='o' || c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U'  )
{

    printf("%c is a Vowel",c);
}
else {
    printf("%c is Constant",c);
}

return 0;

}
