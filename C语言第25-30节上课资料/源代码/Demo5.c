#include <stdio.h>
void main()
{
    //��ӡ5��10��
    int n1,n2;
    printf("����������:");
    scanf("%d",&n1);
    printf("������������");
    scanf("%d",&n2);
    for(int i=1;i<=n1;i++){//����
        for(int j=1;j<=n2;j++){//����
            printf("*");
        }
        printf("\n");
    }
}
