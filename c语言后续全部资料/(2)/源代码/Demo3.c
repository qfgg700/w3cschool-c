#include <stdio.h>
#include <windows.h>
void main()
{
    int attr[] = {1,2,3,4,100,90,80,60,40};

    int num = sizeof(attr);


    for(int i=1;i<=num/4;i++){
        printf("%d\t",attr[i-1]);
        Sleep(3000);
    }

}
