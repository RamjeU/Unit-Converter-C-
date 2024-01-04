// Ramje Uthayakumaar
// Oct 1st, 2023


#include <stdio.h>


// Function prototypes
float convertCelsiusToFahrenheit(float celsius);
float convertFahrenheitToCelsius(float fahrenheit);
float convertCentimeterToInch(float cm);
float convertInchToCentimeter(float inch);
float convertKilometerToMile(float km);
float convertMileToKilometer(float mile);
float convertGallonToLiter(float gallon);
float convertLiterToGallon(float liter);

int main() {
    int choice;
    char conversionDirection;
    float inputValue, result;

    do {
        // Display the menu and get users choice
        printf("Choose an option:\n");
        printf("1 for conversion between Celsius and Fahrenheit\n");
        printf("2 for conversion between Centimeter and Inch\n");
        printf("3 for conversion between Kilometer and Mile\n");
        printf("4 for conversion between Gallon and Liter\n");
        printf("0 for quit\n");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                printf("Enter conversion direction (C/F): ");
                scanf(" %c", &conversionDirection);
                printf("Enter the value to convert: ");
                scanf("%f", &inputValue);

                if (conversionDirection == 'C') {
                    result = convertCelsiusToFahrenheit(inputValue);
                    printf("%.2f Celsius is %.2f Fahrenheit\n", inputValue, result);
                } else if (conversionDirection == 'F') {
                    result = convertFahrenheitToCelsius(inputValue);
                    printf("%.2f Fahrenheit is %.2f Celsius\n", inputValue, result);
                } else {
                    printf("Invalid conversion direction.\n");
                }
                break;

            case 2:
                printf("Enter conversion direction (C/I): ");
                scanf(" %c", &conversionDirection);
                printf("Enter the value to convert: ");
                scanf("%f", &inputValue);

                if (conversionDirection == 'C') {
                    result = convertCentimeterToInch(inputValue);
                    printf("%.2f Centimeters is %.2f Inches\n", inputValue, result);
                } else if (conversionDirection == 'I') {
                    result = convertInchToCentimeter(inputValue);
                    printf("%.2f Inches is %.2f Centimeters\n", inputValue, result);
                } else {
                    printf("Invalid conversion direction.\n");
                }
                break;

            case 3:
                printf("Enter conversion direction (K/M): ");
                scanf(" %c", &conversionDirection);
                printf("Enter the value to convert: ");
                scanf("%f", &inputValue);

                if (conversionDirection == 'K') {
                    result = convertKilometerToMile(inputValue);
                    printf("%.2f Kilometers is %.2f Miles\n", inputValue, result);
                } else if (conversionDirection == 'M') {
                    result = convertMileToKilometer(inputValue);
                    printf("%.2f Miles is %.2f Kilometers\n", inputValue, result);
                } else {
                    printf("Invalid conversion direction.\n");
                }
                break;

            case 4:
                printf("Enter conversion direction (G/L): ");
                scanf(" %c", &conversionDirection);
                printf("Enter the value to convert: ");
                scanf("%f", &inputValue);

                if (conversionDirection == 'G') {
                    result = convertGallonToLiter(inputValue);
                    printf("%.2f Gallons is %.2f Liters\n", inputValue, result);
                } else if (conversionDirection == 'L') {
                    result = convertLiterToGallon(inputValue);
                    printf("%.2f Liters is %.2f Gallons\n", inputValue, result);
                } else {
                    printf("Invalid conversion direction.\n");
                }
                break;

            case 0:
                printf("The Program Will Now Terminate. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

// Function definitions for conversion
float convertCelsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

float convertFahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float convertCentimeterToInch(float cm) {
    return cm / 2.54;
}

float convertInchToCentimeter(float inch) {
    return inch * 2.54;
}

float convertKilometerToMile(float km) {
    return km / 1.60934;
}

float convertMileToKilometer(float mile) {
    return mile * 1.60934;
}

float convertGallonToLiter(float gallon) {
    return gallon * 3.78541;
}

float convertLiterToGallon(float liter) {
    return liter / 3.78541;
}

