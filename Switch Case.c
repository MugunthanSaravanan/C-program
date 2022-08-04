#include <stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    switch(num1 > num2)
    {   
        case 0: 
            printf("%d is maximum", num2);
            break;
        case 1: 
            printf("%d is maximum", num1);
            break;
    }
}