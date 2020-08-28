#include <stdio.h>
void main(){
    do{
        printf("************工具快捷键***********\n");
        printf("\t1、启动C语言开发工具\n");
        printf("\t2、启动QQ\n");
        printf("\t3、启动eclipse\n");
        printf("\t4、退出\n");
        printf("********************************\n");
        printf("请输入您要启动的程序编号：");
        int flag;
        scanf("%d",&flag);
        switch(flag){
        case 1:
            //printf("C语言工具启动成功");
            system("start codeblocks");
            break;
        case 2:
            system("start QQ");
            break;
        case 3:
            system("start eclipse");
            break;
        case 4:
            exit(0);//终止整个程序
            break;
        }
        printf("\n");
    }while(1);
}
