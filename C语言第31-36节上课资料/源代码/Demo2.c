#include <stdio.h>
void main()
{
    printf("��������������ε�������");
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int k=1;k<=num-i;k++){
            printf(" ");
        }

        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
