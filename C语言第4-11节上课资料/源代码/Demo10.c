#include <stdio.h>
void main()
{
    printf("�������������д��(��):");
    int money;
    scanf("%d",&money);
    //��ʼ�ж�
    if(money>500){
        printf("�򿭵�����");
    }else if(money>100){
        printf("������");
    }else if(money>50){
        printf("������");
    }else if(money>10){
        printf("����");
    }else{
        printf("��Ħ��");
    }
}
