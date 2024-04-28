/*
  blink-multiplex

  Cycles through a set of LEDs, turning one on at a time for delayt microseconds.
  Used to test multiplexing speeds.

  Gia-Uyen Tran
  Last modified: 28/04/2024
*/

// define pins
const int LED_1 = 26;
const int LED_2 = 25;
const int LED_3 = 4;
const int LED_4 = 5;
const int LED_5 = 19;
const int LED_6 = 21;
const int LED_7 = 7;
const int LED_8 = 8;
const int LED_9 = 13;
const int LED_10 = 12;

// determine speed
const float frame_rate = 50; // alleged human eye frame rate is 30-60 fps
const float num_led = 10;
const float delayt = 1000000 / frame_rate / num_led; // microseconds


void setup() {
  // initialize LED pins as output.
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(LED_8, OUTPUT);
  pinMode(LED_9, OUTPUT);
  pinMode(LED_10, OUTPUT);
}


// yes this is ugly, didn't feel like being elegant
void loop() {
  digitalWrite(LED_10, LOW);  
  digitalWrite(LED_1, HIGH); 
  delayMicroseconds(delayt);    

  digitalWrite(LED_1, LOW);  
  digitalWrite(LED_2, HIGH);    
  delayMicroseconds(delayt);   

  digitalWrite(LED_2, LOW);    
  digitalWrite(LED_3, HIGH);    
  delayMicroseconds(delayt);   

  digitalWrite(LED_3, LOW);    
  digitalWrite(LED_4, HIGH);    
  delayMicroseconds(delayt);    

  digitalWrite(LED_4, LOW);    
  digitalWrite(LED_5, HIGH);    
  delayMicroseconds(delayt);    

  digitalWrite(LED_5, LOW);    
  digitalWrite(LED_6, HIGH);    
  delayMicroseconds(delayt);    

  digitalWrite(LED_6, LOW);    
  digitalWrite(LED_7, HIGH);    
  delayMicroseconds(delayt);   

  digitalWrite(LED_7, LOW);    
  digitalWrite(LED_8, HIGH);    
  delayMicroseconds(delayt);    

  digitalWrite(LED_8, LOW);    
  digitalWrite(LED_9, HIGH);    
  delayMicroseconds(delayt);   

  digitalWrite(LED_9, LOW);    
  digitalWrite(LED_10, HIGH);    
  delayMicroseconds(delayt);                       
}
