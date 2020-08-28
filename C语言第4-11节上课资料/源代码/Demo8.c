#include <stdio.h>
void main()
{
    printf("请输入您的C语言成绩：");
    float score;
    scanf("%f",&score);
    if(score>98){
        printf("奖励一台mp4");
    }else{
        printf("继续编码");
    }
}
