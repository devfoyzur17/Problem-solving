#include<stdio.h>
int main(){
    char name;
   double salary,salesTotal , result;
   scanf("%s %lf %lf",&name ,&salary, &salesTotal);
   result = salary+(salesTotal*.15);
   printf("TOTAL = R\$ %.2lf",result);
    return 0;


}
