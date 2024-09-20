#include <stdio.h>

int main() {
    double x, xk = 1.0;
    int k;
    double factorial = 1.0;

    scanf("%lf", &x);
    scanf("%d", &k);

    if (k >= 0){
        for (int i = 1; i <= k; i++) {
            xk *= x;
            factorial *= i;
        }
        xk = xk / factorial;
    }
printf("%lf\n", xk);
}