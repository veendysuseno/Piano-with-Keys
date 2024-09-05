# Tone Generator with Button Inputs

## Description

This project utilizes an Arduino to generate musical tones based on button inputs. Each button corresponds to a different musical note, and pressing a button will play the associated tone through a speaker.

## Components

- Arduino (e.g., Arduino Uno)
- Push Buttons (8 units)
- 8 Resistors (10kΩ for pull-down resistors)
- Piezo Buzzer or Speaker
- Jumper wires
- Breadboard (optional)

## Pin Configuration

| Component      | Pin Number |
| -------------- | ---------- |
| Button 1       | 2          |
| Button 2       | 3          |
| Button 3       | 4          |
| Button 4       | 5          |
| Button 5       | 6          |
| Button 6       | 7          |
| Button 7       | 8          |
| Button 8       | 9          |
| Buzzer/Speaker | 10         |

## Code

```cpp
// Code Tone Generator with Button Inputs
void setup(){
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
}

void loop(){
  if(digitalRead(2) == LOW) {
    tone(10, 264); // Do
  }
  else if(digitalRead(3) == LOW) {
    tone(10, 297); // Re
  }
  else if(digitalRead(4) == LOW) {
    tone(10, 330); // Mi
  }
  else if(digitalRead(5) == LOW) {
    tone(10, 352); // Fa
  }
  else if(digitalRead(6) == LOW) {
    tone(10, 396); // Sol
  }
  else if(digitalRead(7) == LOW) {
    tone(10, 440); // La
  }
  else if(digitalRead(8) == LOW) {
    tone(10, 495); // Si
  }
  else if(digitalRead(9) == LOW) {
    tone(10, 528); // Do (Higher Octave)
  }
  else {
    noTone(10);
  }
}
```

## How It Works

1. Initialization:

   - The setup() function configures the digital pins (2-9) as input with internal pull-up resistors enabled. This means that the pins will read HIGH when not pressed and LOW when pressed.

2. Tone Generation:
   - The loop() function continuously checks the state of each button. When a button is pressed (i.e., its pin reads LOW), the Arduino generates a tone corresponding to the musical note associated with that button.
   - The tone is output through the buzzer or speaker connected to pin 10.
   - If no button is pressed, the noTone() function is called to stop any sound.

## Usage

1. Connect the push buttons to pins 2 through 9 with pull-down resistors to ensure stable readings.
2. Connect the buzzer or speaker to pin 10.
3. Upload the code to your Arduino board.
4. Press any button to hear the corresponding musical note.

## Notes

- Ensure that each button is connected properly and that the pull-down resistors are correctly placed.
- The tone frequencies used in the code correspond to the musical notes in the C major scale.
