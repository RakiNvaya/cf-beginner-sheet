#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    double c;
    scanf("%d%d",&a,&b);

    c=(double)a/b;
    int n1=floor(c);
    int n2=ceil(c);
    int n3=round(c);
    printf("floor %d / %d = %d\n",a,b,n1);
    printf("ceil %d / %d = %d\n",a,b,n2);
    printf("round %d / %d = %d\n",a,b,n3);




    return 0;


}
