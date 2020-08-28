#include <stdio.h>
void main()
{
    printf("请输入行数：");
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){//行数
        for(int j=1;j<=num-i+1;j++){//列数
            printf("*");
        }
        printf("\n");
    }
}
