#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float celsius = get_float("Enter temperature in Celsius: ");
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%.1f°C is %.1f°F\n", celsius, fahrenheit);
    return 0;
}