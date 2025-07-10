# Arduino Project: Control 3 LEDs with 3 Buttons
This Arduino sketch demonstrates how to control three LEDs using three buttons, with each button offering a different behavior:

- **Button 1:** Momentary control (press = ON, release = OFF)
- **Button 2:** Toggle control (press to toggle ON/OFF)
- **Button 3:** Long press toggle (must hold for 1 second to toggle)
  
## Features
| Button | Pin | Behavior                               | LED  | Pin |
|--------|-----|----------------------------------------|------|-----|
| 1      | D5  | Turns ON LED while pressed             | LED1 | D2  |
| 2      | D6  | Toggles LED state on each press        | LED2 | D3  |
| 3      | D7  | Toggles LED only after long press (1s) | LED3 | D4  |

## Hardware Required
- Arduino Uno 
- 3 LEDs
- 3 Resistors 
- 3 Push buttons
- Breadboard & jumper wires

## Circuit Connections

| Component | Arduino Pin |
|-----------|--------------|
| LED1      | D2           |
| Button 1  | D5           |
| LED2      | D3           |
| Button 2  | D6           |
| LED3      | D4           |
| Button 3  | D7           |

## Code Summary

- **`ledState1`**: Controls LED1 (direct ON/OFF while holding button 1).
- **`ledState2`**: Toggles when button 2 is pressed once.
- **`ledState3`**: Toggles only when button 3 is held for more than 1 second.
- Uses `millis()` to measure button 3's hold duration.

## How to Use
1. Upload the sketch to your Arduino using the Arduino IDE.
2. Build the circuit on a breadboard.
3. Press each button and observe the LED behavior:
   - Button 1: hold = LED1 ON, release = OFF.
   - Button 2: each press toggles LED2.
   - Button 3: long press (1s+) toggles LED3.

## Demo Image
![image](https://github.com/user-attachments/assets/d260b8e8-b186-427d-9d36-7a28d29f1ec5)

## 📁 Full Code

You can find the full code in the following file:

👉 [`code/led_button_control.ino`](./code/led_button_control.ino)

