#include <stdio.h>
void main()
{
    int num=0;//ͳ�Ƴɼ�>85������
    for(int j=1;j<=3;j++){
        printf("�������%d���༶�ĳɼ�\n",j);
        float score;
        float sum=0;
        for(int i=1;i<=4;i++){
            printf("��%d��ѧԱ�ɼ���",i);
            scanf("%f",&score);
            sum+=score;

            if(score>85){
                num++;
            }
        }
        float avg = sum/4.0;
        printf("��%d���༶����ѧԱ��ƽ���ɼ�:%.1f\n\n",j,avg);
    }
    printf("�ɼ�85�����ϵ�ѧԱ:%d",num);
}
