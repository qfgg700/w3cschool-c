#include <stdio.h>
void main()
{
    printf("请输入会员本月的消费记录：\n");
    float attr[5];
    for(int i=1;i<=5;i++){
        printf("请输入第%d笔购物金额：",i);
        scanf("%f",&attr[i-1]);
    }

    printf("\n序号\t\t\t金额(元)\n");
    float sum=0;
    for(int j=1;j<=5;j++){
        sum+=attr[j-1];
        printf("%d\t\t\t%.1f\n",j,attr[j-1]);
    }
    printf("总金额\t\t\t%f",sum);
}
