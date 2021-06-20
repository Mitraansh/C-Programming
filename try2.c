#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, n;
    scanf("%d %d %d", &a, &b, &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            c = a * pow(2, i / 2);
        }
        else
        {
            d = b * pow(2, i / 2);
        }
    }
    printf("%d", n = fmax(c, d) / fmin(c, d));
    return 0;
}