#include <stdio.h>
void main()
{
    int attr1[4];
    printf("������4�ҵ�ļ۸�\n");
    for(int i=1;i<=4;i++){
        printf("��%d�ҵ�ļ۸�:",i);
        scanf("%d",&attr1[i-1]);
    }

    //�����ֵ
    int max=attr1[0];
    for(int j=1;j<=3;j++){
        if(max<attr1[j]){
            max=attr1[j];
        }
    }
    printf("���ֵ��%d\n",max);

    //��Сֵ
    int min=attr1[0];
    for(int k=1;k<=3;k++){
        if(min>attr1[k]){
            min=attr1[k];
        }
    }
    printf("��Сֵ��%d",min);

}
