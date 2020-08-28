#include <stdio.h>
void main()
{
    int num;
    printf("请输入一个数值：");
    scanf("%d",&num);
    printf("根据这个值可以输出如下加法表:\n");

    int i=0;
    while(i<=num){
        printf("%d + %d = %d\n",i,num-i,num);
        i++;
    }
}
