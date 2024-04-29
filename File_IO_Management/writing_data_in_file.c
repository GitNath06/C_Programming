#include<stdio.h>
struct student {

char name[50];
int c;
int roll;


};

int main()
{
  struct student s[5];
  FILE *fptr;

  fptr = fopen("student_detail.txt","a") ;
  printf("Enter the Name, Roll no  and class of 5 student\n");
  for(int i=0;i<5;i++){
     scanf("%s%d%d",&s[i].name,&s[i].roll,&s[i].c);

  }


  fprintf(fptr,"Information about Student\n");
  fprintf(fptr,"_______________________________________________________________________\n");
  fprintf(fptr,"Name\t\t\t\t\t\tClass\t\t\t\t\t\tRollno\n");
    fprintf(fptr,"--------------------------------------------------------------------------\n");


    for(int i=0;i<5;i++){
fprintf(fptr,"%s\t\t\t\t\t",s[i].name);
fprintf(fptr,"%d\t\t\t\t\t\t",s[i].c);
fprintf(fptr,"%d\t\t\t\t\t\t",s[i].roll);

fprintf(fptr,"\n");
 }

  fclose(fptr);


  return 0;

}
