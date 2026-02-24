// fuel cost calculator
#include <stdio.h>
int main() {
    float distance, mileage, fuel_price, total_cost;
    printf("Enter distance to travel: ");
    scanf("%f", &distance);  
    printf("Enter mileage : ");
    scanf("%f", &mileage);
    printf("Enter price of fuel: ");
    scanf("%f", &fuel_price);
    total_cost = (distance / mileage) * fuel_price;
    printf("Total fuel cost for the trip: %.2f\n", total_cost);
    return 0;
}