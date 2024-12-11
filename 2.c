#include <stdio.h>
#include <math.h>

int main() {
    double Enviroment_temp, initial_temp, temp_after_1_min, time, cooling_constant, final_temp;

    
    printf("Enter the Enviroment temperature (in Celsius): ");
    scanf("%lf", &Enviroment_temp);

    printf("Enter the initial temperature of the body (in Celsius): ");
    scanf("%lf", &initial_temp);

    printf("Enter the temperature of the body after 1 minute (in Celsius): ");
    scanf("%lf", &temp_after_1_min);

    printf("Enter the time in minutes for which to calculate the temperature: ");
    scanf("%lf", &time);

    // Validate input
    if (initial_temp <= Enviroment_temp || temp_after_1_min <= Enviroment_temp || temp_after_1_min >= initial_temp) {
        printf("Error: Input values must satisfy initial_temp > temp_after_1_min > Enviroment_temp.\n");
        return 1;
    }

    //Calculate the cooling constant (k)
    cooling_constant = -log((temp_after_1_min - Enviroment_temp) / (initial_temp - Enviroment_temp));

    //Calculate the temperature at the given time
    final_temp = Enviroment_temp + (initial_temp - Enviroment_temp) * exp(-cooling_constant * time);

    //result
    printf("The temperature of the body at the end of %.2lf minutes is %.2lfC\n", time, final_temp);

    return 0;
}

