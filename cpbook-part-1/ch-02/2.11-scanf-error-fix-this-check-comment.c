#include <stdio.h>
int main()
{
    int a, b, sum;
    scanf("%d", &a);
    // scanf("%d", b);
    //if we get input from uesr, we must need to use &
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is: %d\n", sum);
    return 0;
}