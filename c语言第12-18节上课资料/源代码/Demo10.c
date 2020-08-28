#include <stdio.h>
void main(){
    int flag=0;
    while(flag<=3){
        flag++;
        if(flag==2){
            continue;
        }
        printf("¹þ¹þ%d\n",flag);
    }
}
