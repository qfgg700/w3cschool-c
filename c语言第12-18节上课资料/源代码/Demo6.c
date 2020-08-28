#include <stdio.h>
void main(){
   //(1)找出1-100之间所有能够被2整除的数之和,打印最终结果
   int flag=1;
   int sum = 0;//累加器
   while(flag<=10){
        if(flag%2==0){
            sum=sum+flag;
        }
        flag++;
   }
   printf("最终结果为=%d",sum);
}
