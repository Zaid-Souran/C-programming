#include <stdio.h>

int main() {
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the value of first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator); // Space before %c to ignore leftover newline

    printf("Enter the value of second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.4lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.4lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.4lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("You can't divide by zero!\n");
            } else {
                result = num1 / num2;
                printf("Result: %.4lf\n", result);
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}