#include"stdio.h"
#define N 6
int main()
{
    char *p,s[N];
    int n;
    p=s;
    gets(p);
    n=0;
    while(*p!='\0')
    {
        n=n*8+*p-'0';
        p++;
    }
    printf("%d",n);
}