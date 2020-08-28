#include <stdio.h>
void main()
{
    int attr[7] = {8,4,2,1,23,344,12};
    //数组遍历
    printf("(1)遍历数组：");
    int sum=0;
    for(int i=1;i<=7;i++){
        printf("%d\t",attr[i-1]);
        sum+=attr[i-1];
    }
    printf("\n(2)数之和:%d\n",sum);

    printf("(3)请输入一个数值：");
    int num;
    scanf("%d",&num);
    int flag=0;//如果flag=0则代表不包含
    for(int j=1;j<=7;j++){
        if(num==attr[j-1]){//存在
            flag=1;
            break;
            //printf("包含");
        }
    }

    if(flag==0){
        printf("不包含");
    }else{
        printf("包含");
    }
}
