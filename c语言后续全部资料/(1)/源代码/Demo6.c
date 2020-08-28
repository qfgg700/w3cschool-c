#include <stdio.h>
void main()
{
    int attr[3]={5,10,6};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int temp;
            if(attr[i]>attr[j]){
                temp=attr[i];
                attr[i]=attr[j];
                attr[j]=temp;
            }
        }
    }


}
