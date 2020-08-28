#include <stdio.h>
void main()
{

    int attr1[3];
    attr1[0]=20;
    attr1[1]=30;
    attr1[2]=40;
    printf("attr1[0]=%d\n",attr1[2]);

    int attr2[3]={1,2,3};
    for(int i=0;i<=2;i++){
        printf("attr2[%d]=%d\n",i,attr2[i]);
    }
}
