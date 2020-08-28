#include <stdio.h>
float min2(float num1,float num2);
int max(int i,int j);
void main()
{
    float a = 2.3;
    float b=1.2;
    float c = min2(a,b);//实参
    //printf("最小值为:%f",c);

    int m = max(100,90);
    printf("最大值为：%d",m);
}

//返回最小值
float min2(float num1,float num2){//形参
    float a = num1;
    if(num2<num1){
        a=num2;
    }
    return a;
}

//传递两个int类型的参数，返回最大值
int max(int i,int j){
    if(i>j){
        return i;
    }else{
        return j;
    }
}

（1）传递两个数据float,返回两个数的和




