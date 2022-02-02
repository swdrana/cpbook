#include<stdio.h>
int main(){
    int num1, num2, sum, dif, mul, div;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    sum=num1+num2;
    dif=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    printf("The sum of two no is: %d\n", sum);
    printf("The dif of two no is: %d\n", dif);
    printf("The mul of two no is: %d\n", mul);
    printf("The div of two no is: %d\n", div);
    return 0;
}