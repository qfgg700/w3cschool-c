#include <stdio.h>
void main()
{
    int attr[7] = {8,4,2,1,23,344,12};
    //�������
    printf("(1)�������飺");
    int sum=0;
    for(int i=1;i<=7;i++){
        printf("%d\t",attr[i-1]);
        sum+=attr[i-1];
    }
    printf("\n(2)��֮��:%d\n",sum);

    printf("(3)������һ����ֵ��");
    int num;
    scanf("%d",&num);
    int flag=0;//���flag=0���������
    for(int j=1;j<=7;j++){
        if(num==attr[j-1]){//����
            flag=1;
            break;
            //printf("����");
        }
    }

    if(flag==0){
        printf("������");
    }else{
        printf("����");
    }
}
