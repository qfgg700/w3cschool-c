#include <stdio.h>
void main()
{
   printf("���������Ĳ��ţ�");
   int flag;
   scanf("%d",&flag);

   switch(flag){
    case 1:
        printf("����ְֵĺ���\n");
        break;
    case 2:
        printf("��������ĺ���\n");
        break;
    case 3:
        printf("����үү�ĺ���\n");
        break;
    case 4:
        printf("�������̵ĺ���\n");
        break;
    default:
        printf("���������������������");
        //break;
   }
}
