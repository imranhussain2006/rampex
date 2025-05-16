#include <stdio.h>
int main() { 
    float temperature;
    printf("Enter the temperature in Celsius: "); scanf("%f", &temperature);
    if (temperature < 10) 
    { 
        printf("Suggested outfit: Jacket\n");
        } 
        else if (temperature >= 10 && temperature < 20) 
        { 
            printf("Suggested outfit: Sweater\n"); }
            else
            { 
                printf("Suggested outfit: T-shirt\n");
                } 
                return 0;
                }
                

                
                
            