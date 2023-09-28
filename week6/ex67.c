/*Write a C program that does the following:
–reads the type of a vehicle exiting a car park (C for car, B for bus and T for truck) 
and the number of hours spent in the car park.
–calculates the parking fee given the following rates (GST included):
•Car: $0.70/hr for the first 2 hours; $2.50/hr after 2 hours
•Bus: $1.50/hr for the first 2 hours; $2.00/hr after 2 hours
•Truck: $2.50/hr for the first hour; $3.25/hr after 1 hour
–prints a request for payment that states the total parking fee owed.*/
#include <stdio.h>
int main()
{
    char vehicleType;
    float hours, fee;

    printf("Enter the vehicle type (C for car, B for bus, T for truck):\n");
    scanf("%c", &vehicleType);

    printf("Enter the number of hours spent in the car park:\n");
    scanf("%f", &hours);

    switch (vehicleType)
    {
    case 'C':
        if (hours<=2 && hours > 0)
            fee = hours*0.70;
        else if (hours>2)
            fee = 0.70*2 + (hours-2)*2.50;
        else
            printf("You enter invalid hours!\n");
        break;
    case 'B':
        if (hours<=2 && hours > 0)
            fee = hours*1.50;
        else if (hours>2)
            fee = 1.50*2 + (hours-2)*2.00;
        else
            printf("You enter invalid hours!\n");
        break; 
    case 'T':
        if (hours<=2 && hours > 0)
            fee = hours*2.50;
        else if (hours>2)
            fee = 2.50*2 + (hours-2)*3.50;
        else
            printf("You enter invalid hours!\n");
        break;
    default:
        break;
    }
    printf("The total parking fee is %.2f$ for the vehicle type %c.", fee, vehicleType);
    return 0;
    
}