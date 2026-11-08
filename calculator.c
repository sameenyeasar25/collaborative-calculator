#include<stdio.h>
#include<conio.h>
int main() {
    double a, b;
    printf("Enter two values: \n");
    scanf("%lf%lf", &a, &b);
    printf("Summation: a + b = %.2lf\n", a+b);
    printf("Subtraction: a - b = %.2lf\n", a-b);
    printf("press any key to exit");
    getch();
    return 0;
}