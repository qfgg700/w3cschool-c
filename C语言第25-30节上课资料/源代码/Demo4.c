#include <stdio.h>
void main()
{
    float ssd=0;//���϶�
    float hsd=0;
    int count=1;
    do{
        hsd=ssd*9.0/5.0+32.0;
        printf("���϶�Ϊ%.2f��    ���϶�Ϊ%.2f\n",ssd,hsd);
        ssd=ssd+20.0;
        count++;
    }while(ssd<=250 && count<=10);
}
