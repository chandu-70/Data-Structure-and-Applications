#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    if (a==b)
    return a;
    else if (a>b)
        return gcd(a-b,b);
    return gcd(b,a);
}
int main()
{
    int a,b;
    printf("read value a and b :\n");
    scanf("%d%d",&a,&b);
    printf("\n gcd of %d and %d is %d\n",a,b,gcd(a,b));
}
