#include <stdio.h>

int main() {
    char operator;
    double first_number, second_number;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &first_number, &second_number);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first_number, second_number, first_number + second_number);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first_number, second_number, first_number - second_number);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first_number, second_number, first_number * second_number);
            break;
        case '/':
            if (second_number == 0) {
                printf("Error! Division by zero.\n");
            } else {
                printf("%.1lf / %.1lf = %.1lf", first_number, second_number, first_number / second_number);
            }
            break;
        default:
            printf("Error! Operator is not correct.");
    }

    return 0;
}