#include <stdio.h>
void main()
{
    printf("请输入您的银行存款(万):");
    int money;
    scanf("%d",&money);
    //开始判断
    if(money>500){
        printf("买凯迪拉克");
    }else if(money>100){
        printf("帕萨特");
    }else if(money>50){
        printf("伊兰特");
    }else if(money>10){
        printf("奥拓");
    }else{
        printf("骑摩拜");
    }
}
