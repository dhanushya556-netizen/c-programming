#include <stdio.h>
#include <stdlib.h>

void lengthConverter();
void temperatureConverter();
void weightConverter();
void timeConverter();

int main() {
    int choice;
    do {
        printf("\n==============================\n");
        printf("     UNIT CONVERTER SUITE     \n");
        printf("==============================\n");
        printf("1. Length Converter\n");
        printf("2. Temperature Converter\n");
        printf("3. Weight Converter\n");
        printf("4. Time Converter\n");
        printf("5. Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: lengthConverter(); break;
            case 2: temperatureConverter(); break;
            case 3: weightConverter(); break;
            case 4: timeConverter(); break;
            case 5: printf("\nExiting program... Thank you!\n"); break;
            default: printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

//-------------------------------------------
// LENGTH CONVERTER
//-------------------------------------------
void lengthConverter() {
    int ch;
    float meter, kilometer, centimeter;

    printf("\n--- Length Converter ---\n");
    printf("1. Meter to Kilometer\n");
    printf("2. Kilometer to Meter\n");
    printf("3. Centimeter to Meter\n");
    printf("4. Meter to Centimeter\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter length in meters: ");
            scanf("%f", &meter);
            printf("Length in kilometers: %.3f km\n", meter / 1000);
            break;
        case 2:
            printf("Enter length in kilometers: ");
            scanf("%f", &kilometer);
            printf("Length in meters: %.3f m\n", kilometer * 1000);
            break;
        case 3:
            printf("Enter length in centimeters: ");
            scanf("%f", &centimeter);
            printf("Length in meters: %.3f m\n", centimeter / 100);
            break;
        case 4:
            printf("Enter length in meters: ");
            scanf("%f", &meter);
            printf("Length in centimeters: %.3f cm\n", meter * 100);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

//-------------------------------------------
// TEMPERATURE CONVERTER
//-------------------------------------------
void temperatureConverter() {
    int ch;
    float celsius, fahrenheit;

    printf("\n--- Temperature Converter ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("Temperature in Celsius: %.2f°C\n", celsius);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

//-------------------------------------------
// WEIGHT CONVERTER
//-------------------------------------------
void weightConverter() {
    int ch;
    float kg, gram, pound;

    printf("\n--- Weight Converter ---\n");
    printf("1. Kilogram to Gram\n");
    printf("2. Gram to Kilogram\n");
    printf("3. Kilogram to Pound\n");
    printf("4. Pound to Kilogram\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter weight in kilograms: ");
            scanf("%f", &kg);
            printf("Weight in grams: %.3f g\n", kg * 1000);
            break;
        case 2:
            printf("Enter weight in grams: ");
            scanf("%f", &gram);
            printf("Weight in kilograms: %.3f kg\n", gram / 1000);
            break;
        case 3:
            printf("Enter weight in kilograms: ");
            scanf("%f", &kg);
            printf("Weight in pounds: %.3f lbs\n", kg * 2.20462);
            break;
        case 4:
            printf("Enter weight in pounds: ");
            scanf("%f", &pound);
            printf("Weight in kilograms: %.3f kg\n", pound / 2.20462);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

//-------------------------------------------
// TIME CONVERTER
//-------------------------------------------
void timeConverter() {
    int ch;
    float hours, minutes, seconds;

    printf("\n--- Time Converter ---\n");
    printf("1. Hours to Minutes\n");
    printf("2. Minutes to Hours\n");
    printf("3. Minutes to Seconds\n");
    printf("4. Seconds to Minutes\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter time in hours: ");
            scanf("%f", &hours);
            printf("Time in minutes: %.2f min\n", hours * 60);
            break;
        case 2:
            printf("Enter time in minutes: ");
            scanf("%f", &minutes);
            printf("Time in hours: %.2f hr\n", minutes / 60);
            break;
        case 3:
            printf("Enter time in minutes: ");
            scanf("%f", &minutes);
            printf("Time in seconds: %.2f sec\n", minutes * 60);
            break;
        case 4:
            printf("Enter time in seconds: ");
            scanf("%f", &seconds);
            printf("Time in minutes: %.2f min\n", seconds / 60);
            break;
        default:
            printf("Invalid choice!\n");
    }
}
