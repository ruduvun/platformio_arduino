

#include <Bounce2.h>

#define BUTTON_PIN 3
#define LED_PIN 2

Bounce debouncer = Bounce(); 

void setup() {

  pinMode(BUTTON_PIN,INPUT_PULLUP);

  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); // interval in ms

  pinMode(LED_PIN,OUTPUT);

}

void loop() {
  debouncer.update();

  int value = debouncer.read();

  if ( value == LOW ) {
    digitalWrite(LED_PIN, HIGH );
  } 
  else {
    digitalWrite(LED_PIN, LOW );
  }

}


