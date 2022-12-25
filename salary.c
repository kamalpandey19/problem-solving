#include<stdio.h>
void main()
{
    float basic,hra,da,pf;
    int total,allow;
    char grade;
    printf("enter the basic salary");
    scanf("%f",&basic);
    printf("enter the grade in uppercase letter");
    scanf("%s",&grade);
    if(grade=='A')
    {
    allow=1700;
    }
    else if(grade=='B')
    {
     allow=1500;
    }
    else
    {
    allow=1300;
    }
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    total=basic+hra+da+allow-pf;
    printf("total salary=%d",total);
}