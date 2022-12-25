#include<stdio.h>
#include<math.h>
void main()
{
    int i,n;
    float x,fact=1;
    float sum=1;
    printf("enter the value of x:");
    scanf("%f",&x);
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+pow(x,i)/fact;

    }
       printf("%f",sum);
    }