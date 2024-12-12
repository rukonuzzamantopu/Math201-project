#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double initial_population,percentage_increase,known_time,target_time,growth_rate,calculated_population; 

    printf("Enter the initial population: ");
    scanf("%lf", &initial_population);

    printf("Enter the percentage increase (e.g., 35 for 35%%): ");
    scanf("%lf", &percentage_increase);

    printf("Enter the time period for the percentage increase (in years): ");
    scanf("%lf", &known_time);

    printf("Enter the time for which to calculate the population (in years): ");
    scanf("%lf", &target_time);

    // Calculate the population after the known time
    double population_after_known_time = initial_population * (1 + percentage_increase / 100);

    // Calculate growth rate (k)
    growth_rate = log(population_after_known_time / initial_population) / known_time;

    // Calculate the population after the target time
    calculated_population = initial_population * exp(growth_rate * target_time);

    //result
    printf("The population after %.2f years will be approximately %.2f\n", target_time, calculated_population);

    return 0;
}