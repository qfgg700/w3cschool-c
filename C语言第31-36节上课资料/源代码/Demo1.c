#include <stdio.h>
void main()
{
    do{
        printf("***************dt60�ۺ���ϰ****************\n");
        printf("\t  1����ӡ����(3��10��)\n");
        printf("\t  2����ӡ��ֱ��������\n");
        printf("\t  3����ӡ99�˷���\n");
        printf("*******************************************\n");
        printf("����������ѡ�");
        int flag;//��¼�û������ѡ��
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
            printf("ֱ�������δ�ӡ�ɹ�\n\n");
            break;
        case 3:
            //printf("99��ӡ�ɹ�\n\n");
            for(int i=1;i<=9;i++){
                for(int j=1;j<=i;j++){
                    printf("%d��%d=%d  ",j,i,i*j);
                }
                printf("\n");
            }
            break;
        default:
            printf("����������!!!\n\n");
            break;
        }
    }while(1);
}
