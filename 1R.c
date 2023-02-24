#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);


    printf("%d years\n",n/365);
    a=n%365;

    printf("%d months\n",a/30);
    a=a%30;

    printf("%d days\n",a);

    return 0;


    }
