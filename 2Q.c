#include<stdio.h>
int main()
{
    int n,a,rem;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            printf("%d",a);
        }
        while(a != 0)
        {
              rem=a%10;

                 if(a<10)
                 {
                     printf("%d\n",rem);

                 }
                 else
                 {
                      printf("%d ",rem);
                 }

                 a=a/10;
        }

    }
    return 0;
}
