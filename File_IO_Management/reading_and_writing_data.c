#include<stdio.h>

struct employee{

char name[25];
int salary;

};

int main(){

    system("color 70");

    FILE *fp;
    struct employee e;

    fp=fopen("2.employee_details.txt","w");

    printf("Enter the Name and Salary of A Employee:\n");
    gets(e.name);
    scanf("%d",&e.salary);

    //Writing data in files

    fwrite(&e,sizeof(e),1,fp);

    fclose(fp);

    fp=fopen("employee_detail.txt","r");

    //fetching the data from the file

    fread(&e,sizeof(e),1,fp);
    system("cls");
    printf("Information about the Employees:\n");
    printf("_________________________________\n");
    printf("Name:%s\n",e.name);
    printf("Salary:%d\n",e.salary);
    printf("_________________________________\n");


    return 0;




}
