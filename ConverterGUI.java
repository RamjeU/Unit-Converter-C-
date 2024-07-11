// Ramje Uthayakumaar
// Oct 1st, 2023

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ConverterGUI extends JFrame {

    // Constructor to setup the GUI components
    public ConverterGUI() {
        setTitle("Unit Converter");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // Create main panel
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(7, 2));

        // Create components
        JLabel choiceLabel = new JLabel("Choose an option:");
        String[] options = {
                "Celsius to Fahrenheit",
                "Fahrenheit to Celsius",
                "Centimeter to Inch",
                "Inch to Centimeter",
                "Kilometer to Mile",
                "Mile to Kilometer",
                "Gallon to Liter",
                "Liter to Gallon"
        };
        JComboBox<String> comboBox = new JComboBox<>(options);

        JLabel inputLabel = new JLabel("Enter value:");
        JTextField inputField = new JTextField();

        JButton convertButton = new JButton("Convert");
        JLabel resultLabel = new JLabel("Result:");

        // Add components to panel
        panel.add(choiceLabel);
        panel.add(comboBox);
        panel.add(inputLabel);
        panel.add(inputField);
        panel.add(new JLabel("")); // Empty cell
        panel.add(convertButton);
        panel.add(new JLabel("")); // Empty cell
        panel.add(resultLabel);

        // Add action listener to the button
        convertButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int choice = comboBox.getSelectedIndex();
                try {
                    float inputValue = Float.parseFloat(inputField.getText());
                    float result = 0;

                    switch (choice) {
                        case 0: // Celsius to Fahrenheit
                            result = convertCelsiusToFahrenheit(inputValue);
                            break;
                        case 1: // Fahrenheit to Celsius
                            result = convertFahrenheitToCelsius(inputValue);
                            break;
                        case 2: // Centimeter to Inch
                            result = convertCentimeterToInch(inputValue);
                            break;
                        case 3: // Inch to Centimeter
                            result = convertInchToCentimeter(inputValue);
                            break;
                        case 4: // Kilometer to Mile
                            result = convertKilometerToMile(inputValue);
                            break;
                        case 5: // Mile to Kilometer
                            result = convertMileToKilometer(inputValue);
                            break;
                        case 6: // Gallon to Liter
                            result = convertGallonToLiter(inputValue);
                            break;
                        case 7: // Liter to Gallon
                            result = convertLiterToGallon(inputValue);
                            break;
                    }

                    resultLabel.setText("Result: " + String.format("%.2f", result));
                } catch (NumberFormatException ex) {
                    resultLabel.setText("Invalid input. Please enter a number.");
                }
            }
        });

        // Add panel to frame
        add(panel);
    }

    // Function definitions for conversion
    private float convertCelsiusToFahrenheit(float celsius) {
        return (celsius * 9.0f / 5.0f) + 32;
    }

    private float convertFahrenheitToCelsius(float fahrenheit) {
        return (fahrenheit - 32) * 5.0f / 9.0f;
    }

    private float convertCentimeterToInch(float cm) {
        return cm / 2.54f;
    }

    private float convertInchToCentimeter(float inch) {
        return inch * 2.54f;
    }

    private float convertKilometerToMile(float km) {
        return km / 1.60934f;
    }

    private float convertMileToKilometer(float mile) {
        return mile * 1.60934f;
    }

    private float convertGallonToLiter(float gallon) {
        return gallon * 3.78541f;
    }

    private float convertLiterToGallon(float liter) {
        return liter / 3.78541f;
    }

    public static void main(String[] args) {
        // Run the GUI application
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new ConverterGUI().setVisible(true);
            }
        });
    }
}
