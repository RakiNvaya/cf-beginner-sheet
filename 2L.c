#include<stdio.h>
int main()
{
    int a,b,num;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        int t=a;
        a=b;
        b=t;
    }
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            num=i;
        }
    }
    printf("%d\n",num);
    return 0;
}
