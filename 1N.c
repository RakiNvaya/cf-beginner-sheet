#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
  int c;

    if(65<=a && a<=90)
    {
        c=a+32;
        printf("%c\n",c);
    }
    else
    {
        c=a-32;
        printf("%c\n",c);
    }
    return 0;
}
