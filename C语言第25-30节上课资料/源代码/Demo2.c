#include <stdio.h>
void main()
{
    int person;
    printf("������༶������");
    scanf("%d",&person);

    int javaScore=0;
    int num=0;
    for(int i=1;i<=person;i++){
        printf("�������%dλѧ���ĳɼ�:",i);
        scanf("%d",&javaScore);
        if(javaScore>=80){
            num++;
        }
    }
    printf("80�����ϵ�ѧ������:%d\n",num);

    float avg = num/person;
    printf("80�����ϵ�ѧ����ռ�ı���:%.1f%%",avg*100);
}
