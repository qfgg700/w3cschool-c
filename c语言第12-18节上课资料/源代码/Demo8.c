#include <stdio.h>
void main(){
    int flag=1;
    while(flag<=1000){
        printf("ѭ����%d��\n",flag);
        if(flag==599){
            //��ֹѭ��
            break;
        }
        flag++;
    }
    printf("ѭ����ǰ��ֹ��");
}
