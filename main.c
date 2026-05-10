#include <stdio.h>

float fahrenheit_to_celsius(float f) // Float-funktion för ett decimaltal
{
    return (f - 32) * 5.0/9.0; // Returnerar värdet
}
float celsius_to_fahrenheit(float c) // Float-funktion för ett decimaltal
{
    return (c*9.0)/5.0 + 32; // Returnerar värdet
}

int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}