#include <stdio.h>
#include <string.h>
void main(){
    char str1[]="Nick����";
    char str2[]="Adidas�˶���";

    char str3[]="zhangsan1";
    char str4[]="zhangsan";

    int flag = strcmp(str3,str4);
    printf("flag=%d",flag);

}
