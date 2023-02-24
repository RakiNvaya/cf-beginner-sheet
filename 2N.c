#include<stdio.h>
int main()
{
    char a;
    int n,n1;

    scanf("%c\n%d",&a,&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&n1);
        for(int j=1;j<=n1;j++)
        {
            if(j==n1)
            {
                printf("%c\n",a);
            }
            else
            {

                 printf("%c",a);

            }
        }
    }
    return 0;
}
