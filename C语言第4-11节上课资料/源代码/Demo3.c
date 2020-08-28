#include <stdio.h>
void main()
{
    int a=10,b=20,c1;
    c1= a+b;
    printf("a+b=%d\n",c1);

    int c2 = a-b;
    int c3=a*b;
    printf("a-b=%d,\ta*b=%d\n",c2,c3);  //\t：水平制表符

    float a1 = 10;
    float b1 = 20;
    float f1 = a1/b1;
    printf("a1/b1=%f",f1);
}
