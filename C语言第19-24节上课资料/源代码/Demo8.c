#include <stdio.h>
void main()
{
    int num;
    printf("������һ����ֵ��");
    scanf("%d",&num);
    printf("�������ֵ����������¼ӷ���:\n");
    for(int i=0;i<=num;i++){
        printf("%d + %d = %d\n",i,num-i,num);
    }
}
