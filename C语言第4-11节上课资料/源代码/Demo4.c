#include <stdio.h>
void main()
{
    int a = 2,b=3;
    int c = a%b;
    printf("a取余b=%d\n",c);

    int n1 = 10;
    n1++;//===>n1=n1+1;
    printf("自增=%d\n",n1);

    int n2 = 0;
    n2--;//====>n2=n2-1;
    n2--;
    printf("自减=%d",n2);

    int n3=10;
    int n4=20;

    int n5 = n3+n4;
}
