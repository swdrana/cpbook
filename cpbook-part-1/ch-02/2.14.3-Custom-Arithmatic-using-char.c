#include<stdio.h>
int main(){
    double num1, num2, sum, dif, mul, div;
    char signAdd='+',signSub='-',signMul='*',signDiv='/';
    printf("Enter First Number: ");
    scanf("%lf",&num1);
    printf("Enter Second Number: ");
    scanf("%lf", &num2);
    sum=num1+num2;
    dif=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    printf("%0.2lf %c %0.2lf = %0.2lf\n",num1,signAdd,num2,sum);
    printf("%0.2lf %c %0.2lf = %0.2lf\n",num1,signSub,num2,dif);
    printf("%0.2lf %c %0.2lf = %0.2lf\n",num1,signMul,num2,mul);
    printf("%0.2lf %c %0.2lf = %0.2lf\n",num1,signDiv,num2,div);
    return 0;
}