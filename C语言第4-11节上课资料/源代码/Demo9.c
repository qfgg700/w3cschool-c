#include <stdio.h>
void main()
{
    printf("请输入1-3之内的数字：");
    int flag;
    scanf("%d",&flag);
    if(flag==1){
        printf("星期一");
    }else if(flag==2){
        printf("星期二");
    }else if(flag==3){
        printf("星期三");
    }else{
        printf("亲，您逗我玩吗？");
    }

}
