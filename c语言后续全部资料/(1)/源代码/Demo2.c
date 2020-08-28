#include <stdio.h>
void main()
{
    float attr[5];
    for(int i=1;i<=5;i++){
        printf("请输入第%d位学生的Java成绩：",i);
        scanf("%f",&attr[i-1]);
    }

    float max=attr[0];
    for(int j=1;j<=5;j++){
        if(max<attr[j-1]){
            max=attr[j-1];
        }
    }
    printf("最高分为：%.1f",max);


}
