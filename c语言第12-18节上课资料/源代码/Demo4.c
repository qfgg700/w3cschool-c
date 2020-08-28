#include <stdio.h>
void main(){
    float stb;
    float java;
    float sql;
    printf("STB的成绩是：");
    scanf("%f",&stb);

    printf("Java的成绩是：");
    scanf("%f",&java);

    printf("SQL的成绩是：");
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
    printf("Java与SQL的成绩差为:%f\n",cha);
    printf("三门课的平均分为:%.2f",avg);
}
