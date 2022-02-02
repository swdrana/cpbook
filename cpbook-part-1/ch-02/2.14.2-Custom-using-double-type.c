#include<stdio.h>
int main(){
    double num1, num2, sum, dif, mul, div;
    printf("Enter First Number: ");
    scanf("%lf",&num1);
    printf("Enter Second Number: ");
    scanf("%lf", &num2);
    sum=num1+num2;
    dif=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    printf("Sum: %0.2lf\n",sum);
    printf("Dif: %0.2lf\n",dif);
    printf("Mul: %0.2lf\n",mul);
    printf("Dif: %0.2lf\n",div);
    return 0;
}