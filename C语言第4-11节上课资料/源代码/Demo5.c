#include <stdio.h>
void main()
{
    int num1;
    int num2;
    printf("请输入第一个数：");
    scanf("%d",&num1);

    printf("请输入第二个数：");
    scanf("%d",&num2);

    int sum = num1+num2;
    printf("num1+num2=%d",sum);
}
