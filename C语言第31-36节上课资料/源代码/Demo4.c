#include <stdio.h>
void main()
{
    printf("�������Ա���µ����Ѽ�¼��\n");
    float attr[5];
    for(int i=1;i<=5;i++){
        printf("�������%d�ʹ����",i);
        scanf("%f",&attr[i-1]);
    }

    printf("\n���\t\t\t���(Ԫ)\n");
    float sum=0;
    for(int j=1;j<=5;j++){
        sum+=attr[j-1];
        printf("%d\t\t\t%.1f\n",j,attr[j-1]);
    }
    printf("�ܽ��\t\t\t%f",sum);
}
