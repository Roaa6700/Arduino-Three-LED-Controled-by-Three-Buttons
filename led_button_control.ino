const int ledPin1 = 2;
const int buttonPin1 = 5;

const int ledPin2 = 3;
const int buttonPin2 = 6;

const int ledPin3 = 4;
const int buttonPin3 = 7;

bool ledState1 = false;
bool ledState2 = false;
bool ledState3 = false;

bool button2Pressed = false;
bool button3Pressed = false;

unsigned long button3PressTime = 0;
const unsigned long longPressDuration = 1000;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP);

  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT_PULLUP);

  pinMode(ledPin3, OUTPUT);
  pinMode(buttonPin3, INPUT_PULLUP);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}

void loop() {
  if (digitalRead(buttonPin1) == LOW) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }

  if (digitalRead(buttonPin2) == LOW) {
    if (!button2Pressed) {
      button2Pressed = true;
      ledState2 = !ledState2;
      digitalWrite(ledPin2, ledState2 ? HIGH : LOW);
    }
  } else {
    button2Pressed = false;
  }

  if (digitalRead(buttonPin3) == LOW) {
    if (!button3Pressed) {
      button3Pressed = true;
      button3PressTime = millis();
    }
  } else {
    if (button3Pressed) {
      unsigned long button3Duration = millis() - button3PressTime;
      if (button3Duration >= longPressDuration) {
        ledState3 = !ledState3;
        digitalWrite(ledPin3, ledState3 ? HIGH : LOW);
      }
      button3Pressed = false;
    }
  }
}
