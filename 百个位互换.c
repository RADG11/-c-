#include"stdio.h"

void hh(int *i)
{
    int a,b,c,t;
    {
        a=*i/100;b=*i/10%10;c=*i%10;
    }
    if(c!=0)
    {
        t=a;a=c;c=t; 
    }
    *i=a*100+b*10+c;
}

int main()
{
    while (1)
    {
        int i;
        scanf("%d",&i);
        hh(&i);
        printf("%d\n",i);
    }
}