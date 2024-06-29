#include<stdio.h>
#include<conio.h>
int main()
{
    int a=8,b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);
    return 0;
}