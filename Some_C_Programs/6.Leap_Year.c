#include <stdio.h>
int main()
{
    system("color 80");
    //    condition for leap year
    //
    //    1.)100 century of years  having 400 years of differences.
    //     ---->1200,1600,2000,2400 etc
    //
    //
    //     OR
    //
    //
    //    2.)Such years which are completely divisible by 4;
    //     ----> 2012 2016 2020 etc
    //
    //     And
    //
    //    3.) Such years which are not complete divisible by 100
    //
    //    note 2 and 3 most be satisfied at a single time;
    //
    //
    //    1.year%400==0
    //
    //     ||
    //
    //    2.year%4 == 0 && year%100!=0

    int year;
    printf("Enter the year:");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a LeapYear", year);
    }
    else
    {
        printf("%d is not a LeapYear", year);
    }

    return 0;
}
