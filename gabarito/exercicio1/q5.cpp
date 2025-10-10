#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = celsius * 1.8 + 32;
    kelvin = (fahrenheit + 459.67) / 1.8;

    
    printf("celsius = %f\n", celsius);
    printf("Fahrenheit = %f\n", fahrenheit);
    printf("Kelvin = %f\n", kelvin);

    return 0;
}