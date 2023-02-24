#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        max=a;
        if(b<=c)
        {
            min=b;
        }
        else
        {
            min=c;
        }
    }
    else if(b>=c && b>=a)
    {
        max=b;
        if(a<=c)
        {
            min=a;
        }
        else
        {
            min=c;
        }
    }
    else  if(c>=b && c>=a)
    {
        max=c;
        if(a<=b)
        {
            min=a;
        }
        else
        {
            min=b;
        }
    }
    printf("%d %d\n",min,max);
    return 0;
}
