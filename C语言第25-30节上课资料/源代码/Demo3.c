#include <stdio.h>
void main()
{
    float sum=0;
    float score=0;
    for(int i=1;i<=5;i++){
        printf("请输入第%d门课的成绩:",i);
        scanf("%f",&score);
        if(score<0){
            printf("抱歉，您眼瞎嘛?");
            break;
        }
        sum+=score;
    }
    if(score>=0){
        printf("\n");
        float avg = sum/5.0;
        printf("平均分为:%.1f",avg);
    }
}
