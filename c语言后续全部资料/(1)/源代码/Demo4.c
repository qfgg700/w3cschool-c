#include <stdio.h>
void main()
{
    char ch[10];
    printf("������һ���ַ���:");
    scanf("%s",&ch);
    printf("¼����ַ���Ϊ��%s\n",ch);

    //����char���͵�����
    for(int i=1;i<=10;i++){//����
        printf("%c\t",ch[i-1]);
    }
}
