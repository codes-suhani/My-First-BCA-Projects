#include <stdio.h>

int main() {
    float temperature;
    printf("Enter your city's temperature in Celsius:");
    scanf("%f",&temperature);
    if(temperature > 40.0) {
       printf("ALERT : Extreme heat warning! please stay indoors.\n");
    }
    printf("Have a Wonderful day ahead!\n");
}
