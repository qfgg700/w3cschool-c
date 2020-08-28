#include <stdio.h>
void main()
{
    int attr1[4];
    printf("请输入4家店的价格：\n");
    for(int i=1;i<=4;i++){
        printf("第%d家店的价格:",i);
        scanf("%d",&attr1[i-1]);
    }

    //找最大值
    int max=attr1[0];
    for(int j=1;j<=3;j++){
        if(max<attr1[j]){
            max=attr1[j];
        }
    }
    printf("最大值：%d\n",max);

    //最小值
    int min=attr1[0];
    for(int k=1;k<=3;k++){
        if(min>attr1[k]){
            min=attr1[k];
        }
    }
    printf("最小值：%d",min);

}
