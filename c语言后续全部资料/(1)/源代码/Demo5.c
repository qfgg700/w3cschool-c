#include <stdio.h>
void main()
{
    int attr[5]={10,90,30,20,10};
    //冒泡排序
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            if(attr[i]>attr[j]){
                temp=attr[i];
                attr[i]=attr[j];
                attr[j]=temp;
            }
        }
    }

    //遍历排序后的结果
    for(int k=1;k<=5;k++){
        printf("%d\t",attr[k-1]);
    }

}
