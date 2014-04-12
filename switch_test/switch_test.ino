// Test for controlling a servo using a connected three-state switch.
// Connect the center pin of the switch to 5V. Connect one pin of the switch
// to digital pin 6, and the other to digital pin 7. Also connect 
// the pins to ground through a resistor.
//  Stephen Hoover, AnotherSolipsist on github, 12 April 2014

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
const int servo_max = 180; // Don't let the servo turn to angles larger than this.
const int servo_min = 0; // Don't let the servo turn to angles smaller than this.
const int switch_a_in = 6;
const int switch_b_in = 7;
const int servo_pin = 9;
int switch_state_a = 0;
int switch_state_b = 0;

void setup() 
{ 
  Serial.begin(9600);           // set up Serial library at 9600 bps. Used for output to screen.
  myservo.attach(servo_pin);  // attaches the servo on pin 9 to the servo object 
  
  pinMode(switch_a_in, INPUT); // Use 
  pinMode(switch_b_in, INPUT);
  
  Serial.println("Switch controlled servo test, begin!");
} 
 
 
void loop() 
{ 
  // Check the state of each input pin.
  // Assume that only one of them will be high at a time.
  switch_state_a = digitalRead(switch_a_in);
  switch_state_b = digitalRead(switch_b_in);
  
  if (switch_state_a==HIGH) {
   //Serial.println("Switch a high."); 
    myservo.write(++pos);
    delay(1);
    if (pos > 180) {
      pos = 180;
    }
  }
  else if (switch_state_b==HIGH) {
   //Serial.println("Switch b high."); 
   myservo.write(--pos); 
   delay(1);
   if (pos < 0) {
    pos = 0; 
   }
  }
  else {
   //Serial.println("No switch"); 
  }
  
}
