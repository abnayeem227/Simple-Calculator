#include <stdio.h>

int main() {
    double number1, number2;
    char operation;

    printf("enter operation type(+,-,*,/) :\n");
    scanf(" %c", &operation);

    printf("enter two number :\n");
    scanf("%lf %lf", &number1, &number2);

    switch(operation) {
        case '+':
            printf("%.2lf%c%.2lf=%.2lf\n", number1, operation, number2, number1 + number2);
            break;
        case '-':
            printf("%.2lf%c%.2lf=%.2lf\n", number1, operation, number2, number1 - number2);
            break;
        case '*':
            printf("%.2lf%c%.2lf=%.2lf\n", number1, operation, number2, number1 * number2);
            break;
        case '/':
            if (number2 == 0.0) {
                printf("divide by zero situation\n");
            } else {
                printf("%.2lf%c%.2lf=%.2lf\n", number1, operation, number2, number1 / number2);
            }
            break;
        default:
            printf("invalid operation\n");
    }

    return 0;
}
