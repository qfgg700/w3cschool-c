#include <stdio.h>
float min2(float num1,float num2);
int max(int i,int j);
void main()
{
    float a = 2.3;
    float b=1.2;
    float c = min2(a,b);//ʵ��
    //printf("��СֵΪ:%f",c);

    int m = max(100,90);
    printf("���ֵΪ��%d",m);
}

//������Сֵ
float min2(float num1,float num2){//�β�
    float a = num1;
    if(num2<num1){
        a=num2;
    }
    return a;
}

//��������int���͵Ĳ������������ֵ
int max(int i,int j){
    if(i>j){
        return i;
    }else{
        return j;
    }
}

��1��������������float,�����������ĺ�




