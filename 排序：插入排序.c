#include"stdio.h"
#define N 10
main()
{
  int a[N];
  int i,j,k,t;
  for(i=0;i<N;i++)
  scanf("%d",&a[i]);
  for(i=0;i<N-1;i++)
  {
    k=i;
    for(j=i;j<N-1;j++)
    if (a[k]>a[j+1])
    k=j+1;
    t=a[k],a[k]=a[i],a[i]=t;
  }
  for(i=0;i<N;i++)
  printf("%2d",a[i]);
  printf("\n");
}                                                 