#include<stdio.h>
#include<math.h>
int main()
{
     long long int a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    long long int e=b*log(a);
    long long int f=d*log(c);
    if(e>f)
    {
        printf("YES\n");
    }
    else

    {
        printf("NO\n");
    }
    return 0;
}
