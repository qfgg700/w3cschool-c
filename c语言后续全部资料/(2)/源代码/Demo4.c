#include <stdio.h>
void main()
{
    do{
        printf("********超市计价系统**********\n");
        printf("\t1、登录\n");
        printf("\t2、退出\n");
        printf("******************************\n");
        printf("请输入您的选项:");
        int flag;
        scanf("%d",&flag);
        switch(flag){
        case 1:
            printf("请输入姓名：");
            char username[10];
            char password[10];
            scanf("%s",&username);
            printf("请输入密码：");
            scanf("%s",&password);
            //开始判断
            int flag1 = strcmp(username,"admin");
            int flag2 = strcmp(password,"123");
            if(flag1==0 && flag2==0){
                printf("登录成功");
            }else{
                printf("您输入有误，请重新输入!!!\n");
            }
            break;
        case 2:
            break;
        default:
            printf("您输入的有误，请重新输入!!!");
            break;
        }
    }while(1);
}
