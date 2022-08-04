#include <stdio.h>
int main()
{
    int n1=12, n2=25, i, gcd, lcm;
    for(i=1;i <=n1&& i<= n2; ++i)
    {
        if(n1%1==0 && n2%1==0)
        gcd = i;
    }
    printf ("G.C.D is %d\n", gcd);
    lcm = (n1 * n2) / gcd;
    printf("L.C.M is %d\n", lcm);
    return 0;
}