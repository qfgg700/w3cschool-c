#include <stdio.h>
void main(){
    int flag1 = (1>2) && (4>3) && (0==0);
    printf("flag1=%d\n",flag1);

    int flag2 = (0>2) || (1>3);
    printf("flag2=%d\n",flag2);

    int flag3 = !(3>2);
    printf("flag3=%d\n",flag3);
}
