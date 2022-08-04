
#include <stdio.h>

int main(void) 
{
int a,b;
printf("Enter number a :");
scanf("%d",&a);
printf("Enter number b :");
scanf("%d",&b);
switch (a>b)
{
    case 0:
        printf("A is Greater");
        break;
    case 1:
        printf("B is Greater");
        break;
}    
}