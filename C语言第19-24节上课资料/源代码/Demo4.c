#include <stdio.h>
void main(){
    //(1)从键盘录入一个数据，使用j接收。如果j=20，则循环输出我爱编程20遍
    int j;
    printf("请输入循环的次数：");
    scanf("%d",&j);
    for(int i=1;i<=j;i++){
        printf("我爱编程%d\n",i);
    }
}
