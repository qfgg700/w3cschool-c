#include <stdio.h>
void main()
{
    float ssd=0;//摄氏度
    float hsd=0;
    int count=1;
    do{
        hsd=ssd*9.0/5.0+32.0;
        printf("摄氏度为%.2f，    华氏度为%.2f\n",ssd,hsd);
        ssd=ssd+20.0;
        count++;
    }while(ssd<=250 && count<=10);
}
