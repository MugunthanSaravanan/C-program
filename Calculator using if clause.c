#include<stdio.h>
int add(int a,int b)
{
    printf("%d + %d = %d",a,b,a+b);
}
int sub(int a,int b)
{
    printf("%d - %d = %d",a,b,a-b);
}
int mul(int a,int b)
{
    printf("%d X %d = %d",a,b,a*b);
}
int div(int a,int b)
{
    printf("%d / %d = %d",a,b,a/b);
}
void main()
{
    int x,c,d;
    printf("enter the number 1: ");
    scanf("%d",&c);
    printf("enter number 2:  ");
    scanf("%d",&d);
    printf("enter 1 to add\n");
    printf("enter 2 to sub\n");
    printf("enter 3 to mul\n");
    printf("enter 4 to div\n");
    scanf("%d",&x);
    if (x==1){
    printf("Sum of your given numbers :%d\n",c+d);
    }
    else if (x==2){
    printf("Subtraction of your given numbers :%d\n",c-d);
    }
    else if (x==3){
    printf("Multiplication of your given numbers :%d\n",c*d);
    }
    else if (x==4){
    printf("Division of your given numbers :%d\n",c/d);
    }
    else
    printf("Type correct number");
    return 0;
}