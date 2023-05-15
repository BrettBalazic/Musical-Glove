//Constants
const int buzzerPin = 9; //Piezo Buzzer
const int flexPin1 = A0; //pinkie finger
const int flexPin2 = A1; // ring finger
const int flexPin3 = A2; // middle finger
const int flexPin4 = A3; // index finger
const int flexPin5 = A4; // thumb 

const int turningpoint1 = 800;
const int turningpoint2= 700;
const int turningpoint3= 850;
const int turningpoint4= 750;
const int turningpoint5= 900;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int flexValue1 = analogRead(flexPin1);
  Serial.print("Pinkie: ");
  Serial.println(flexValue1);
  int flexValue2 = analogRead(flexPin2);
  Serial.print("Ring: ");
  Serial.println(flexValue2);
  int flexValue3 = analogRead(flexPin3);
  Serial.print("Middle: ");
  Serial.println(flexValue3);
  int flexValue4 = analogRead(flexPin4);
  Serial.print("Index: ");
  Serial.println(flexValue4);
  int flexValue5 = analogRead(flexPin5);
  Serial.print("Thumb: ");
  Serial.println(flexValue5);

  if (flexValue1 < turningpoint1 && flexValue2 <turningpoint2  && flexValue3 <turningpoint3  && flexValue4 <turningpoint4  && flexValue5 < turningpoint5 ) {
    noTone(buzzerPin);
  }
  else if (flexValue1 < turningpoint1 && flexValue2 <turningpoint2  && flexValue3 <turningpoint3  && flexValue4 <turningpoint4  && flexValue5 >=turningpoint5) {
    tone(buzzerPin, 262); //C
  }
  else if (flexValue1 < turningpoint1 && flexValue2 <turningpoint2  && flexValue3 <turningpoint3  && flexValue4 >=turningpoint4  && flexValue5 >=turningpoint5) {
    tone(buzzerPin, 294); //D
  }
  else if (flexValue1 < turningpoint1 && flexValue2 <turningpoint2  && flexValue3 >=turningpoint3  && flexValue4 >=turningpoint4  && flexValue5 >=turningpoint5) {
    tone(buzzerPin, 329.63);//E
  }
  else if (flexValue1 < turningpoint1 && flexValue2 >= turningpoint2  && flexValue3 >= turningpoint3  && flexValue4 >=turningpoint4  && flexValue5 >=turningpoint5) {
    tone(buzzerPin, 349.228);//F
  }
  else if (flexValue1 >= turningpoint1 && flexValue2 >= turningpoint2  && flexValue3 >= turningpoint3  && flexValue4 >= turningpoint4  && flexValue5 >=turningpoint5) {
    tone(buzzerPin, 391.995);//G
  }
  else {
    noTone(buzzerPin);
  }

  delay(10);
}
