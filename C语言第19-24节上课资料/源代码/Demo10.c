#include <stdio.h>
void main()
{
    int num;
    printf("������һ����ֵ��");
    scanf("%d",&num);
    printf("�������ֵ����������¼ӷ���:\n");

    int i=0;
    while(i<=num){
        printf("%d + %d = %d\n",i,num-i,num);
        i++;
    }
}
