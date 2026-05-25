// Arduino pins connected to the 7-segment display
const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

const int upButton = 10;
const int downButton = 9;

int count = 0; // Current number display


bool lastUpState = HIGH;
bool lastDownState = HIGH;


const byte numData[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  
  for (int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT);
  }

  
  pinMode(upButton, INPUT_PULLUP);
  pinMode(downButton, INPUT_PULLUP);

  // Display initial number 0
  displayNumber(count);
}

void loop() {
 
  bool currentUpState = digitalRead(upButton);
  bool currentDownState = digitalRead(downButton);

  
  if (currentUpState == LOW && lastUpState == HIGH) {
    count++;
    if (count > 9) count = 9; // Wrap around to 0 after 9
    displayNumber(count);
    delay(150); // Debounce delay
  }
  lastUpState = currentUpState;

  // Check if DOWN button was just pressed
  if (currentDownState == LOW && lastDownState == HIGH) {
    count--;
    if (count < 0) count = 0; // Wrap around to 9 if going below 0
    displayNumber(count);
    delay(150); // Debounce delay
  }
  lastDownState = currentDownState;
}

void displayNumber(int num) {
  digitalWrite(segA, numData[num][0]);
  digitalWrite(segB, numData[num][1]);
  digitalWrite(segC, numData[num][2]);
  digitalWrite(segD, numData[num][3]);
  digitalWrite(segE, numData[num][4]);
  digitalWrite(segF, numData[num][5]);
  digitalWrite(segG, numData[num][6]);
}