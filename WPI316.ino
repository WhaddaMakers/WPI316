/* 
  @@@@@@@@@@@@@@@@@@@@@@                                                                                                                               
  @@@@@@@@@@@@@@@@@@@@@@             @@@.    @@@    @@@.     @@@@    @@@@        @@@@@@@@@        @@@@@@@@@@@@@.     .@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@%%@@@%%@@@%%@@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@@@@@@@        @@@@@@@@@@@@@@     @@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@  @@@  @@@  @@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@            @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@   @    @   @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@@@@@@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@@@@@@@@ 
  @@@@@            @@@@@             @@@@###@@@@@##@@@@@     @@@@    @@@@      @@@@@@@@@@@@       #@@@@@###@@@@@     ##@@@@@###@@@@       @@@@@@@@@@@
  @@@@@@@@@@@@@@@@@@@@@@             @@@@@@@@@@@@@@@@@@@     @@@@    @@@@      @@@@    @@@@@      @@@@@@@@@@@@@@     @@@@@@@@@@@@@@      @@@@     @@@@
  @@@@@@@@@@@@@@@@@@@@@@

  Whadda WPI316 PADDLE SWITCH MODULE example

  This example program shows how you can use the WPI316 Paddle Switch Module.

  For more information about this code, check our Whadda github page at https://github.com/WhaddaMakers/
  For more information about this product, consult the manual at the WPI316 product page on https://whadda.com/
*/

// Pin to which the toggle switch is connected
const int toggleSwitchPin = 8;

// Pin for the LED
const int LedPin = 2;

// Setup
void setup() {
  pinMode(LedPin, OUTPUT);                                                // Set the LED pin as OUTPUT
  pinMode(toggleSwitchPin, INPUT_PULLUP);                                 // Set the toggle Switch pin as INPUT_PULLUP
}

// Loop
void loop() {
  int toggleSwitchStatus = digitalRead(toggleSwitchPin);                  // Read the status of the toggle switch input

  if (toggleSwitchStatus == HIGH) {                                       // If the toggle switch is turned to the on position
    digitalWrite(LedPin, HIGH);                                           // Turn the LED on
  }
  else {                                                                  // Otherwise
    digitalWrite(LedPin, LOW);                                            // Turn the LED off
  }
}