#include <stdio.h>
void main()
{
    float sum=0;
    float score=0;
    for(int i=1;i<=5;i++){
        printf("�������%d�ſεĳɼ�:",i);
        scanf("%f",&score);
        if(score<0){
            printf("��Ǹ������Ϲ��?");
            break;
        }
        sum+=score;
    }
    if(score>=0){
        printf("\n");
        float avg = sum/5.0;
        printf("ƽ����Ϊ:%.1f",avg);
    }
}
