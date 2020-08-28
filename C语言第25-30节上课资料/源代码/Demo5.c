#include <stdio.h>
void main()
{
    //打印5行10列
    int n1,n2;
    printf("请输入行数:");
    scanf("%d",&n1);
    printf("请输入列数：");
    scanf("%d",&n2);
    for(int i=1;i<=n1;i++){//行数
        for(int j=1;j<=n2;j++){//列数
            printf("*");
        }
        printf("\n");
    }
}
