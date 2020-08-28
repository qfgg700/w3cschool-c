#include <stdio.h>
void main()
{
    int flag=1;
    int sum = 1;
    while(flag<=100){
        if(flag%7==0){
            sum*=flag;//sum=sum+flag;
        }
        flag++;
    }
    printf("sum=%d",sum);
}
