#include <stdio.h>

int main() {
    double pi = 0.0;
    double epsilon;
    int k, m;

    scanf("%lf", &epsilon);

    double x;
    int max_iterations = 1000000;

    for (k = 1; k < max_iterations; k++) {
        for (m = 1; m < max_iterations; m++) {
            x = 1.0 / ((4 * m - 2) * k);
            pi += x;

            if (x < epsilon) {
                break;
            }
        }
    }

    pi *= 8.0;

    printf("%lf %lf\n", epsilon, pi);

    return 0;
}
