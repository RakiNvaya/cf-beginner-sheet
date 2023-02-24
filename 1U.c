#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    int b=a;
    double d=a-b;
    if(a-b>0)
    {
        printf("float %d %.3lf",b,d);
    }
    else
    {
        printf("int %d",b);
    }
    return 0;
}
