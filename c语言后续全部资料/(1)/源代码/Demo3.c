#include <stdio.h>
void main()
{
    printf("------------���мƼ�ϵͳ-------------\n");
    printf("���\t\t��Ʒ\t\t�۸�\n");
    printf("1\t\t�ɿڿ���\t3.0��\n");
    printf("2\t\t���׻�\t\t5.0��\n");
    printf("3\t\t���\t\t10.0��\n");

    printf("�����빺�����Ʒ��ţ�\n");
    float num=0;//���������
    int flag;
    scanf("%d",&flag);
    printf("�����빺���������\n");
    scanf("%f",&num);

    float sum=0;//�ܼ�
    switch(flag){
    case 1:
        sum = 3.0*num;
        printf("�����ѹ���:%f",sum);
        break;
    case 2:
        sum = 5.0*num;
        printf("�����ѹ���:%f",sum);
        break;
    case 3:
        sum = 10.0*num;
        printf("�����ѹ���:%f",sum);
        break;
    default:
        printf("�Բ�������������?");
        break;
    }
}
