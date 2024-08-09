# Projection of Piano Sound

## Project Overview
This project simulates a basic piano using a microcontroller. It reads analog input from an ADC and uses the values to trigger corresponding actions, such as lighting an LED or playing a specific note on a piezo buzzer when buttons are pressed. The project is divided into two main sections: one that reads ADC values and controls an LED, and another that detects button presses to play piano notes.

## Components Used
- **Microcontroller**: To run the code.
- **ADC (Analog-to-Digital Converter)**: Reads the analog input.
- **LED**: Visual indicator when certain conditions are met.
- **Piezo Buzzer**: Used to generate sound for piano notes.
- **Buttons**: Used to trigger specific piano notes.
- **Resistors**: For pull-up configuration on button pins.

## Code Breakdown

### ADC Reading and LED Control
- **adc_rd**: Stores the value read from the ADC.
- **a**: A float variable that stores the processed ADC value.
- **PORTD.F0**: Controls the LED. The LED lights up when the value of `a` is between 0 and 35.

### Piano Sound Projection
- **Piezo Buzzer**: Connected to pin 11.
- **Buttons**: Five buttons are connected to pins 6, 7, 8, 9, and 10. Each button corresponds to a different note (C, D, E, A, B).
- **tone() function**: Generates a sound at a specified frequency when a button is pressed.
- **noTone() function**: Stops the sound when no button is pressed.

### How it Works
1. **Setup**: 
    - Configures the ADC and input/output pins.
    - Initializes PWM for other components.
  
2. **Loop**: 
    - Continuously reads the ADC value, converts it to a voltage, and checks if it falls within a certain range to control the LED.
    - Simultaneously, it checks if any of the five buttons are pressed. If a button is pressed, it plays the corresponding note on the piezo buzzer.

## How to Use
1. **Setup the Hardware**:
    - Connect the buttons, piezo buzzer, and LED to the appropriate pins on your microcontroller.
    - Ensure the ADC input is correctly wired.

2. **Upload the Code**:
    - Compile and upload the provided code to your microcontroller using your preferred IDE or programming environment.

3. **Run the Project**:
    - Press any of the buttons to hear the corresponding piano note.
    - Observe the LED behavior based on the ADC input.

## Conclusion
This project demonstrates how to create a simple piano sound projection system using a microcontroller, ADC, and piezo buzzer. It can be extended by adding more buttons for additional notes or integrating more complex sound synthesis techniques.

## Future Enhancements
- Add more notes by including additional buttons.
- Implement a dynamic volume control based on the ADC input.
- Explore adding a display to show the note being played.
