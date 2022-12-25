#include<stdio.h>
int main()
{
    int day,month,year;
    printf("enter a valid date(dd mm yyyy):");
    scanf("%d%d%d",&day,&month,&year);
    int mon;
    if(month>2)
    mon=month;
    else
    {
        mon=(10+month);
        year--;
            }
            int y=year%100;
            int c=year/100;
            int w=day+13*(mon+1)/5+y+y/4+c/4+5*c;
            w=w%7;
            switch(w)
            {
                case 0: printf("saturday\n");
                        break;
                case 1: printf("sunday\n");
                        break;
                case 2: printf("monday\n");
                        break;
                case 3: printf("tuesday\n");
                        break;
                case 4: printf("wednesday\n");
                        break;
                case 5: printf("thursday\n");
                case 6: printf("friday\n");
                        break; 
            }
            
}