#include<stdio.h>
#include<math.h>
long factorial(int p)
{
    long f=1;
    for(p;p>=1;p--)
    f*=p;
    return f;
}
float series(float x)
{
    float sum=0;
    int i,s=1,n;
    for(i=1;i<=n;i+=2)
    {
        sum+=(pow((double)x,i)/factorial(i))*s;
        s*=-1;
    }
    return sum;
}
int main()
int x,n;
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the no. of term:");
scanf("%d",&n);
printf("\n%dAns");