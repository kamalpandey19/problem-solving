#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the value of x and y");
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
    printf("origin");
    if(x>0&&y>0)
    printf("first quadrant");
    if(x<0&&y>0)
    printf("second quadrant");
    if(x<0&&y<0)
    printf("third quadrant");
    if(x>0&&y<0)
    printf("fourth quadrant");

}