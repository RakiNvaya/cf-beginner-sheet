#include<stdio.h>
#include<string.h>>
int main()
{
    char a[15],b[15],c[15],d[15];
    scanf("%s %s",&a,&b);
    scanf("%s %s",&c,&d);
    int e=strcmp(b,d);
    if(e==0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}
