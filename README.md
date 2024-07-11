# Unit Converter GUI

## Description
This Java application is a simple graphical user interface (GUI) for converting between various units of measurement. The application allows users to convert between the following units:
- Celsius to Fahrenheit
- Fahrenheit to Celsius
- Centimeters to Inches
- Inches to Centimeters
- Kilometers to Miles
- Miles to Kilometers
- Gallons to Liters
- Liters to Gallons

## Features
- Easy-to-use interface
- Real-time conversion
- Supports multiple unit conversions

## Prerequisites
- Java Development Kit (JDK) installed on your system

## How to Run
1. Clone the repository or download the source code.
2. Compile the Java file using the following command:
    ```sh
    javac ConverterGUI.java
    ```
3. Run the compiled Java class using the following command:
    ```sh
    java ConverterGUI
    ```

## Usage
1. Launch the application.
2. Select the desired conversion type from the dropdown menu.
3. Enter the value you wish to convert in the input field.
4. Click the "Convert" button.
5. The converted result will be displayed on the screen.

## Code Explanation
- The `ConverterGUI` class extends `JFrame` to create the main window of the application.
- The GUI components are created and added to a `JPanel` with a `GridLayout`.
- An `ActionListener` is attached to the "Convert" button to perform the conversion based on the selected option and input value.
- The conversion functions are implemented as private methods within the `ConverterGUI` class.

## Conversions
The following conversion functions are implemented:
- `convertCelsiusToFahrenheit(float Celsius)`: Converts Celsius to Fahrenheit.
- `convertFahrenheitToCelsius(float Fahrenheit)`: Converts Fahrenheit to Celsius.
- `convertCentimeterToInch(float cm)`: Converts Centimeters to Inches.
- `convertInchToCentimeter(float inch)`: Converts Inches to Centimeters.
- `convertKilometerToMile(float km)`: Converts Kilometers to Miles.
- `convertMileToKilometer(float mile)`: Converts Miles to Kilometers.
- `convertGallonToLiter(float gallon)`: Converts Gallons to Liters.
- `convertLiterToGallon(float litre)`: Converts Liters to Gallons.

## Author
Ramje Uthayakumaar

