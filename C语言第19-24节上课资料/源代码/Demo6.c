#include <stdio.h>
void main(){
    float score;
    float sum=0;
    for(int i=1;i<=5;i++){
        printf("�������%d�ſεĳɼ�:",i);
        scanf("%f",&score);
        sum+=score;
    }
    float avg = sum/5.0;
    printf("ƽ����Ϊ:%.1f",avg);
}
