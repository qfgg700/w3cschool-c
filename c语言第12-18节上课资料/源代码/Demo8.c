#include <stdio.h>
void main(){
    int flag=1;
    while(flag<=1000){
        printf("循环第%d遍\n",flag);
        if(flag==599){
            //终止循环
            break;
        }
        flag++;
    }
    printf("循环提前终止了");
}
