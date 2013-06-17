#include <TVout.h>
#include <pollserial.h>
#include <fontALL.h>

TVout TV;
pollserial pserial;

void setup()  {
 
  TV.begin(PAL,136,104);
  initOverlay();
  TV.select_font(font6x8);
  TV.println("Serial Terminal");
  TV.println("-- Version 0.1 --");
  TV.set_hbi_hook(pserial.begin(9600));
}

void loop() {
  if (pserial.available()) {
    TV.print((char)pserial.read());
  }
}


void initOverlay() {
  TCCR1A = 0;
  // Enable timer1.  ICES0 is set to 0 for falling edge detection on input capture pin.
  TCCR1B = _BV(CS10);

  // Enable input capture interrupt
  TIMSK1 |= _BV(ICIE1);

  // Enable external interrupt INT0 on pin 2 with falling edge.
  EIMSK = _BV(INT0);
  EICRA = _BV(ISC11);
}

void initInputProcessing() {
  // Analog Comparator setup
  ADCSRA &= ~_BV(ADEN); // disable ADC
  ADCSRB |= _BV(ACME); // enable ADC multiplexer
  ADMUX &= ~_BV(MUX0);  // select A2 for use as AIN1 (negative voltage of comparator)
  ADMUX |= _BV(MUX1);
  ADMUX &= ~_BV(MUX2);
  ACSR &= ~_BV(ACIE);  // disable analog comparator interrupts
  ACSR &= ~_BV(ACIC);  // disable analog comparator input capture
}

// Required
ISR(INT0_vect) {
  display.scanLine = 0;
}

