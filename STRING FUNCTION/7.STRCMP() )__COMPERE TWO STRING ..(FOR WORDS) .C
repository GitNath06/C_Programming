#include<stdio.h>
#include<string.h>
int main (){


char a[10],b[20];
int n=1;
while(n<=10){


printf("Enter any two Words: \n ");

scanf("%s%s",&a,&b);

if (strcmp(a,b) > 0){
    printf("%s is greater word: \n",a);

}
else if (strcmp(a,b) == 0){

        printf("%s is equal to %s: \n",a,b);


}
else {
         printf("%s is greater word: \n",b);

}



n++;

}
return 0 ;
}
