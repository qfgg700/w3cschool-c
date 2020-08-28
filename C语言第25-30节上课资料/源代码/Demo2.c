#include <stdio.h>
void main()
{
    int person;
    printf("请输入班级人数：");
    scanf("%d",&person);

    int javaScore=0;
    int num=0;
    for(int i=1;i<=person;i++){
        printf("请输入第%d位学生的成绩:",i);
        scanf("%d",&javaScore);
        if(javaScore>=80){
            num++;
        }
    }
    printf("80分以上的学生人数:%d\n",num);

    float avg = num/person;
    printf("80分以上的学生所占的比例:%.1f%%",avg*100);
}
