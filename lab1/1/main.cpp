#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    
    int res = (int)n;
    if (n > 0) n = n - res;

    res += (int)(n * 2);
    printf("%i\n", res);
    return 0;
}
