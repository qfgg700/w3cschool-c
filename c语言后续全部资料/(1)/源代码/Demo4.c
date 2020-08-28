#include <stdio.h>
void main()
{
    char ch[10];
    printf("请输入一个字符串:");
    scanf("%s",&ch);
    printf("录入的字符串为：%s\n",ch);

    //遍历char类型的数组
    for(int i=1;i<=10;i++){//乱码
        printf("%c\t",ch[i-1]);
    }
}
