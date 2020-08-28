#include <stdio.h>
void main()
{
    int num=0;//统计成绩>85的人数
    for(int j=1;j<=3;j++){
        printf("请输入第%d个班级的成绩\n",j);
        float score;
        float sum=0;
        for(int i=1;i<=4;i++){
            printf("第%d个学员成绩：",i);
            scanf("%f",&score);
            sum+=score;

            if(score>85){
                num++;
            }
        }
        float avg = sum/4.0;
        printf("第%d个班级参赛学员的平均成绩:%.1f\n\n",j,avg);
    }
    printf("成绩85分以上的学员:%d",num);
}
