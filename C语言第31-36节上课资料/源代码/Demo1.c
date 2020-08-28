#include <stdio.h>
void main()
{
    do{
        printf("***************dt60综合练习****************\n");
        printf("\t  1、打印矩形(3行10列)\n");
        printf("\t  2、打印正直角三角形\n");
        printf("\t  3、打印99乘法表\n");
        printf("*******************************************\n");
        printf("请输入您的选项：");
        int flag;//记录用户输入的选项
        scanf("%d",&flag);
        switch(flag){
        case 1:
            for(int i=1;i<=3;i++){
                for(int j=1;j<=10;j++){
                    printf("*");
                }
                printf("\n");
            }
            printf("\n\n");
            break;
        case 2:
            printf("直角三角形打印成功\n\n");
            break;
        case 3:
            //printf("99打印成功\n\n");
            for(int i=1;i<=9;i++){
                for(int j=1;j<=i;j++){
                    printf("%d×%d=%d  ",j,i,i*j);
                }
                printf("\n");
            }
            break;
        default:
            printf("您输入有误!!!\n\n");
            break;
        }
    }while(1);
}
