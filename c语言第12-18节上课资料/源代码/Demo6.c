#include <stdio.h>
void main(){
   //(1)�ҳ�1-100֮�������ܹ���2��������֮��,��ӡ���ս��
   int flag=1;
   int sum = 0;//�ۼ���
   while(flag<=10){
        if(flag%2==0){
            sum=sum+flag;
        }
        flag++;
   }
   printf("���ս��Ϊ=%d",sum);
}
