#include <stdio.h>
void main()
{
    float cScore;
    int flag=1;
    float sum=0;
    int count=0;
    while(flag<=5){
        printf("�������%d��ѧ����c���Գɼ�:",flag);
        scanf("%f",&cScore);
        //��ʼ���ɼ��ۼ�
        sum+=cScore;
        //�ҳ�cScore>80�ֵ�����
        if(cScore>80){
            count++;
        }
        flag++;
    }
    float avg = sum/5.0;
    printf("ƽ����Ϊ:%.2f\n",avg);
    printf("�ɼ�>80�ֵ�����Ϊ��%d",count);
}
