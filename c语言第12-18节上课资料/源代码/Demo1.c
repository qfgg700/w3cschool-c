#include <stdio.h>
void main()
{
    printf("请输入名次信息:");
    int flag;
    scanf("%d",&flag);
    if(flag==1){
        printf("参加夏令营");
    }else if(flag==2){
        printf("笔记本");
    }else if(flag==3){
        printf("移动硬盘");
    }else{
        printf("无奖励");
    }
}
