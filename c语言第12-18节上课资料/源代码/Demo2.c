#include <stdio.h>
void main()
{
   printf("请输入您的拨号：");
   int flag;
   scanf("%d",&flag);

   switch(flag){
    case 1:
        printf("拨打爸爸的号码\n");
        break;
    case 2:
        printf("拨打妈妈的号码\n");
        break;
    case 3:
        printf("拨打爷爷的号码\n");
        break;
    case 4:
        printf("拨打奶奶的号码\n");
        break;
    default:
        printf("您输入的有误，请重新输入");
        //break;
   }
}
