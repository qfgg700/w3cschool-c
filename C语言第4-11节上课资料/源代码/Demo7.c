#include <stdio.h>
void main()
{
    printf("请输入您的C语言成绩：");
    float score;//分数
    scanf("%f",&score);
    if(score>=60){
        printf("恭喜您，及格了!!!");
    }else{
        printf("回家吃棍子烧肉!!!");
    }
}
