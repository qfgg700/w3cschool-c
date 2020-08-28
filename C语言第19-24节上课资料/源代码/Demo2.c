#include <stdio.h>
void main()
{
    float cScore;
    int flag=1;
    float sum=0;
    int count=0;
    while(flag<=5){
        printf("请输入第%d个学生的c语言成绩:",flag);
        scanf("%f",&cScore);
        //开始将成绩累加
        sum+=cScore;
        //找出cScore>80分的人数
        if(cScore>80){
            count++;
        }
        flag++;
    }
    float avg = sum/5.0;
    printf("平均分为:%.2f\n",avg);
    printf("成绩>80分的人数为：%d",count);
}
