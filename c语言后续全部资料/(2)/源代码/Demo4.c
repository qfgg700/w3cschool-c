#include <stdio.h>
void main()
{
    do{
        printf("********���мƼ�ϵͳ**********\n");
        printf("\t1����¼\n");
        printf("\t2���˳�\n");
        printf("******************************\n");
        printf("����������ѡ��:");
        int flag;
        scanf("%d",&flag);
        switch(flag){
        case 1:
            printf("������������");
            char username[10];
            char password[10];
            scanf("%s",&username);
            printf("���������룺");
            scanf("%s",&password);
            //��ʼ�ж�
            int flag1 = strcmp(username,"admin");
            int flag2 = strcmp(password,"123");
            if(flag1==0 && flag2==0){
                printf("��¼�ɹ�");
            }else{
                printf("��������������������!!!\n");
            }
            break;
        case 2:
            break;
        default:
            printf("���������������������!!!");
            break;
        }
    }while(1);
}
