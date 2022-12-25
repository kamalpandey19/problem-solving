#include<stdio.h>
void main()
{
    int n,c=0;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("numer of digit are %d",c);
}
