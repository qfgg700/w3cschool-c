#include <stdio.h>
#include <string.h>
void main(){
    char str1[]="Nick±³°ü";
    char str2[]="AdidasÔË¶¯ÉÀ";

    char str3[]="zhangsan1";
    char str4[]="zhangsan";

    int flag = strcmp(str3,str4);
    printf("flag=%d",flag);

}
