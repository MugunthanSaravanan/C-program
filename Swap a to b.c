#include <stdio.h>
void swap (int a,int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("After Swaping a=%d b=%d \n",a,b);
}
int main()
{
    int a=10;
    int b=20;
    printf("Before Swaping a=%d b=%d \n",a,b);
    swap(a,b);
    return 0;
}