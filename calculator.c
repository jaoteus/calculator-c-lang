// Simple calculator using C
#include <stdio.h>
int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter a number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Result: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %lf", result);
            break;
        default:
            printf("%c is not valid", operator);

    }
}
