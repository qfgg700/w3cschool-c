#include <stdio.h>
void main()
{
    printf("------------超市计价系统-------------\n");
    printf("编号\t\t商品\t\t价格\n");
    printf("1\t\t可口可乐\t3.0￥\n");
    printf("2\t\t爆米花\t\t5.0￥\n");
    printf("3\t\t益达\t\t10.0￥\n");

    printf("请输入购买的商品编号：\n");
    float num=0;//购买的数量
    int flag;
    scanf("%d",&flag);
    printf("请输入购买的数量：\n");
    scanf("%f",&num);

    float sum=0;//总价
    switch(flag){
    case 1:
        sum = 3.0*num;
        printf("您消费共计:%f",sum);
        break;
    case 2:
        sum = 5.0*num;
        printf("您消费共计:%f",sum);
        break;
    case 3:
        sum = 10.0*num;
        printf("您消费共计:%f",sum);
        break;
    default:
        printf("对不起，您逗我玩吗?");
        break;
    }
}
