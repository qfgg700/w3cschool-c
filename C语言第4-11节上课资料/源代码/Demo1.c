#include <stdio.h>
void main()
{
    //int char long double float

    int len1 = sizeof(int);
    printf("int���͵��ֽڳ���Ϊ:%d\n",len1);

    int len2 = sizeof(long);
    printf("long���͵��ֽڳ���Ϊ:%d\n",len2);

    int len3 = sizeof(float);
    printf("float���͵��ֽڳ���Ϊ:%d\n",len3);

    int len4 = sizeof(double);
    printf("double���͵��ֽڳ���Ϊ:%d\n",len4);

}
