#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);

    if(48<=a && a<= 57)
    {
        printf("IS DIGIT\n");
    }
    else if(65 <=a && a<=90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(97<=a && a<=112)
    {
        printf("ALPHA\nIS SMALL\n");
    }
    return 0;
}
