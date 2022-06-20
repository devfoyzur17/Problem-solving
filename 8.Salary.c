#include<stdio.h>
int main(){
    int number;
    double workhour,amount,result;
    scanf("%d %lf %lf",&number, &workhour, &amount);
    result = workhour * amount;

    printf("NUMBER = %d\n",number);
    printf("SALARY = U\$ %.2lf\n",result);
    return 0;
}
