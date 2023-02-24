#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    int e=(a*b*c*d)%100;
    if(e==0)
    {
        printf("00\n");
    }
     else
  {
    printf("%d\n",e);
  }
    return 0;
}
