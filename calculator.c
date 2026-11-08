#include<stdio.h>
#include<conio.h>
int main() {
    double a, b;
    int choice;
    printf("Enter two values: \n");
    scanf("%lf%lf", &a, &b);
    printf("\nSelect: 1. Addition 2. Subtraction 3. Multiplication 4. Division\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Summation: a + b = %.2lf\n", a+b);
            break;
        case 2:
            printf("Subtraction: a - b = %.2lf\n", a-b);
            break;
        case 3:
            printf("Multiplication a * b = %.2lf\n", a*b);
            break;
        case 4:
            if (b != 0)
                printf("Division: a / b = %.2lf\n", a/b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid selection!\n");
    }
    printf("press any key to exit");
    getch();
    return 0;
}