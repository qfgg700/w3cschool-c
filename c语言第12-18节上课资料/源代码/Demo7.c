#include <stdio.h>
void main(){
    printf("请输入循环次数:");
    int num;
    int flag=1;
    scanf("%d",&num);
    while(flag<=num){
        printf("我超级爱编程%d\n",flag);
        flag++;
    }
}
