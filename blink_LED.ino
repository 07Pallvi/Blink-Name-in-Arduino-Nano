// BLINK FIRST NAME IN MORSE CODE WITH BUILT-IN LED ON ARDUINO NANO 33 IoT 

void setup() 
{
  //initialize digital pin LED_BUILTIN as OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  // My first name = PALLVI
  // (.--.) (.-) (.-..) (.-..) (...-) (..)
  letterP();
  letterA();
  letterL();
  letterL();
  letterV();
  letterI();
  digitalWrite(LED_BUILTIN, LOW);
}

void line()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(800);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(500);                       // wait for half a second
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(300);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(500);                       // wait for half a second
}

void letterP()  // (.--.)
{
  dot();
  line();
  line();
  dot();
  delay(1000);
}

void letterA()  // (.-)
{
  dot();
  line();
  delay(1000);
}

void letterL()  // (.-..)
{
  dot();
  line();
  dot();
  dot();
  delay(1000); 
}

void letterV()  // (...-)
{
  dot();
  dot();
  dot();
  line();
  delay(1000);
}

void letterI() // (..)
{
  dot();
  dot();
  delay(1000);
}
