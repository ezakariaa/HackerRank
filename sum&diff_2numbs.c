#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int n,m,sum,diff;
    float a,b,sumf,difff;

    scanf("%d %d", &n, &m);
    scanf("%f %f", &a, &b);

    sum = n+m;
    sumf = a+b;
    difff = a-b;
    diff = n-m;
    printf("%d %d\n",sum, diff);
    printf("%.1f %.1f",sumf, difff);

    return 0;
}
