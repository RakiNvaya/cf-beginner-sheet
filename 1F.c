#include<stdio.h>
int main()
{
    long long int a,b,d,e;
    scanf("%lld%lld",&a,&b);
    d=a%10;
    e=b%10;
    printf("%lld",d+e);
    return 0;

}
