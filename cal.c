#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Ask the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the chosen operation
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;

        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
} //end the code here
