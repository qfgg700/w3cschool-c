#include <stdio.h>
void main(){
    do{
        printf("************���߿�ݼ�***********\n");
        printf("\t1������C���Կ�������\n");
        printf("\t2������QQ\n");
        printf("\t3������eclipse\n");
        printf("\t4���˳�\n");
        printf("********************************\n");
        printf("��������Ҫ�����ĳ����ţ�");
        int flag;
        scanf("%d",&flag);
        switch(flag){
        case 1:
            //printf("C���Թ��������ɹ�");
            system("start codeblocks");
            break;
        case 2:
            system("start QQ");
            break;
        case 3:
            system("start eclipse");
            break;
        case 4:
            exit(0);//��ֹ��������
            break;
        }
        printf("\n");
    }while(1);
}
