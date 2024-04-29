
#include<stdio.h>

struct student{

char name[25];
int roll;
int clas;

};

int main(){

    system("color 70");

    FILE *fp;
    struct student s;

    fp=fopen("3.Student_details.txt","w");

    printf("Enter the Name , Rollno and Class of A Student:\n");
    gets(s.name);
    scanf("%d%d",&s.roll,&s.clas);

    //Writing data in files

    fwrite(&s,sizeof(s),1,fp);

    fclose(fp);

    fp=fopen("3.Student_details.txt","r");

    //fetching the data from the file

    fread(&s,sizeof(s),1,fp);
    system("cls");
    printf("Information about the Student:\n");
    printf("_________________________________\n");
    printf("Name:%s\n",s.name);
    printf("Rollno:%d\n",s.roll);
    printf("Class:%d\n",s.clas);
    printf("_________________________________\n");


    return 0;




}
