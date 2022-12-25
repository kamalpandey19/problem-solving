#include<stdio.h>
void main()
{
    int temp;
    printf("enter the temp in centigrade");
    scanf("%d",&temp);
    if(temp<0)
    printf("freezing weather");
    if(temp>=0&&temp<10)
    printf("very cold weather");
    if(temp>=10&&temp<20)
    printf("cold weather");
    if(temp>=20&&temp<30)
    printf("normal");
    if(temp>=30&&temp<40)
    printf("hot");
    if(temp>=40)
    printf("very hot");
}