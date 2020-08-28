#include <stdio.h>
void main(){
    float score;
    float sum=0;
    for(int i=1;i<=5;i++){
        printf("请输入第%d门课的成绩:",i);
        scanf("%f",&score);
        sum+=score;
    }
    float avg = sum/5.0;
    printf("平均分为:%.1f",avg);
}
