#include <stdio.h>
#include <math.h>

int main() {

    double x, result = 1.0;
    int n;

    scanf("%d", &x);
    scanf("%d", &n);

    double denom = pow(x, 2) + 1;

    for (int k = 1; k <= n; k++) {
        result += 1 / pow(denom, k);
    }
    printf("%lf\n", result);

}