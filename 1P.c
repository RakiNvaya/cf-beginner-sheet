#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=n/1000;
    if(c%2==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}
