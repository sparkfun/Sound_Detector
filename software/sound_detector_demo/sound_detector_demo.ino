/******************************************************************************
 * sound_detector_demo.ino
 * Sound detector sample sketch
 * Byron Jacquot @ SparkFun Electronics
 * February 19, 2014
 * https://github.com/sparkfun/Sound_Detector
 * 
 * This sketch demonstrates the use of the Sparkfun Sound Detector board.
 *
 * The Sound Detector is a small board that combines a microphone and some 
 * processing circuitry.  It provides not only an audio output, but also a 
 * binary indication of the presence of sound and an analog representation 
 * of it's amplitude.  
 *
 * This sketch demonstrates two different modes of usage for the Sound
 * Detector.  The gate output (a binary indication that is high when sound
 * is present, and low when conditions are quiet) is used to fire a pin-change 
 * ISR, which lights an LED when the sound is present.  The envelope output 
 * (an analog voltage to rises to indicate the amplitude of the sound) is 
 * sampled in the loop(), and it prints an indication of the level to the 
 * serial terminal. 
 *
 * Resources:
 * Additional library requirements: none
 * 
 * Development environment specifics:
 * Using Arduino IDe 1.0.5
 * Tested on Redboard, #.3v/8MHz and 5v/16MHz ProMini hardware.
 * 
 * This code is beerware; if you see me (or any other SparkFun employee) at the
 * local, and you've found our code helpful, please buy us a round!
 * 
 * Distributed as-is; no warranty is given.
 ******************************************************************************/

#define PIN_GATE_IN 2
#define IRQ_GATE_IN  0
#define PIN_LED_OUT 13
#define PIN_ANALOG_IN A0

void soundISR()
{
  if(digitalRead(PIN_GATE_IN) == 1)
  {
    digitalWrite(PIN_LED_OUT, 1);
  }
  else
  {
    digitalWrite(PIN_LED_OUT, 0);   
  }
}


void setup()
{
  Serial.begin(9600);
  
  //  Configure LED pin as output
  pinMode(PIN_LED_OUT, OUTPUT);
  
  // configure input to interrupt
  pinMode(PIN_GATE_IN, INPUT);
  attachInterrupt(IRQ_GATE_IN, soundISR, CHANGE);
  
  Serial.println("Initialized");
}

void loop()
{
  int value;
  
  value = analogRead(PIN_ANALOG_IN);
  
  Serial.print("Status: ");
  if(value <= 10)
  {
    Serial.println("Quiet.");
  }
  else if( (value > 10) && ( value <= 30) )
  {
    Serial.println("Moderate.");
  }
  else if(value > 30)
  {
    Serial.println("Loud.");
  }
  
  // pause for 1 second
  delay(1000);
  
}

