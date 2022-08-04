#include <stdio.h>
int main() {
    char operation;
    int n1, n2;
    printf("Enter an operator : ");
    scanf("%c", &operation);
    printf("Enter first operands: ");
    scanf("%d",&n1);
    printf("Enter second operands: ");
    scanf("%d",&n2);
    switch(operation)
    {
        case '+':
            printf("%.1d + %.1d = %.1d",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1d - %.1d = %.1d",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1d * %.1d = %.1d",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1d / %.1d = %.1d",n1, n2, n1/n2);
            break;
        default:
            printf("Error! operator is not correct");
    }
  return 0;
}