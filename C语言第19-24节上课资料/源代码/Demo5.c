#include <stdio.h>
void main(){
    //(2)ʹ��forѭ���ҳ�1-200֮���ܹ���3������������֮��
    int sum=0;
    for(int i=1;i<=200;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    printf("���ս��Ϊ=%d",sum);
}
