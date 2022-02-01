#include <stdio.h>
int main()
{
    // int a, b, sum;                // replace int to double
    double a, b, sum;
    // scanf("%d", &a);              // replace all %d to %lf
    scanf("%lf", &a);
    // scanf("%d", &b);              // replace all %d to %lf
    scanf("%lf", &b);
    sum = a + b;
    // printf("Sum is: %d\n", sum);  // replace all %d to %lf
    printf("Sum is: %lf\n", sum);
    return 0;
}