#include <stdio.h>
void main(){
    float stb;
    float java;
    float sql;
    printf("STB�ĳɼ��ǣ�");
    scanf("%f",&stb);

    printf("Java�ĳɼ��ǣ�");
    scanf("%f",&java);

    printf("SQL�ĳɼ��ǣ�");
    scanf("%f",&sql);

    printf("-----------------------------\n");
    printf("STB\t\tJAVA\t\tSQL\n");
    printf("%f\t%f\t%f\n",stb,java,sql);
    printf("-----------------------------\n");

    float cha = java-sql;
    if(cha<0){
        cha=-cha;
    }
    float avg = (java+sql+stb)/3.0;
    printf("Java��SQL�ĳɼ���Ϊ:%f\n",cha);
    printf("���ſε�ƽ����Ϊ:%.2f",avg);
}
