#include <stdio.h>
void main()
{
    //int char long double float

    int len1 = sizeof(int);
    printf("int类型的字节长度为:%d\n",len1);

    int len2 = sizeof(long);
    printf("long类型的字节长度为:%d\n",len2);

    int len3 = sizeof(float);
    printf("float类型的字节长度为:%d\n",len3);

    int len4 = sizeof(double);
    printf("double类型的字节长度为:%d\n",len4);

}
