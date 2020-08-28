#include <stdio.h>
void main(){
    //(2)使用for循环找出1-200之间能够被3整除的所有数之和
    int sum=0;
    for(int i=1;i<=200;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    printf("最终结果为=%d",sum);
}
