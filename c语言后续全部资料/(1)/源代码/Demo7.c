#include <stdio.h>
void main(){//主函数
    max();
}

void max(){//普通函数
    int a = 10;
    int b = 20;
    if(a>b){
        printf("最大值%d",a);
    }else{
        printf("最大值%d",b);
    }
}

