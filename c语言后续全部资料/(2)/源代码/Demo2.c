#include <stdio.h>
#include <string.h>
void main(){
    printf("������5λѧԱ�ĳɼ���\n");
    float scores[5];
    for(int i=1;i<=5;i++){
        scanf("%f",&scores[i-1]);
    }

    //��ʼ����
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            float temp;
            if(scores[i-1]<scores[j-1]){
                temp=scores[i-1];
                scores[i-1]=scores[j-1];
                scores[j-1]=temp;
            }
        }
    }

    printf("ѧԱ�ɼ�������������");
    for(int k=1;k<=5;k++){
       printf("%.1f\t",scores[k-1]);
    }
}
