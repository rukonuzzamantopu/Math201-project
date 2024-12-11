#include <stdio.h>
#include <math.h>

int main() {
    double total_S, S_converted, t1, t2, S_total_converted;

    printf("Enter the amount of sugar (grams): ");
    scanf("%lf", &total_S);
    printf("Enter the amount converted in time t1 (grams): ");
    scanf("%lf", &S_converted);
    printf("Enter the time t1 (min): ");
    scanf("%lf", &t1);
    printf("Enter the time to find the conversion (min): ");
    scanf("%lf", &t2);

    double k = -log(1 - S_converted / total_S) / t1;
    S_total_converted = total_S * (1 - exp(-k * t2)); // exp -> e to the power -k*t2
    printf("%.2lf",k);
    printf("The total amount converted in %.2lf minutes is %.2lf grams\n", t2, S_total_converted);

    return 0;
}

