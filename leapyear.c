#include<stdio.h>
void main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%400==0)
    printf("%d is leap year",year);
    else if(year%100!=0&&year%4==0)
    printf("%d is leap year",year);
    else
    printf("%d is not leap year",year);
    
}