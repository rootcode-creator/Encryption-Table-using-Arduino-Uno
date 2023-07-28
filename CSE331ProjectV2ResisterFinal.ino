

void setup() {


  DDRD = DDRD | 0B00000000;
  DDRB = DDRB | 0B001111;
}
void loop() {

  // Condition for Output 0



  if ((((!(PIND & 0B00010000)) && (!(PIND & 0B00001000))) || ((!(PIND & 0B00100000)) && (!(PIND & 0B00010000)) && (!(PIND & 0B00000100)))
       || ((PIND & 0B00100000) && (!(PIND & 0B00001000)) && (PIND & 0B00000100)))
      == HIGH) {


    PORTB = PORTB | 0B000001;




  } else {



    PORTB = PORTB & 0B111110;
  }





  // Condition for Output 1



  if ((((PIND & 0B00010000) && (!(PIND & 0B00001000)) && (PIND & 0B00000100)) || ((!(PIND & 0B00010000)) && (PIND & 0B00001000) && (!(PIND & 0B00000100)))

       || ((PIND & 0B00100000) && (!(PIND & 0B00010000)) && (PIND & 0B00001000))

       || ((!(PIND & 0B00100000)) && (PIND & 0B00010000) && (!(PIND & 0B00001000)))

       || ((!(PIND & 0B00100000)) && (PIND & 0B00010000) && (PIND & 0B00000100)) || ((PIND & 0B00100000) && (!(PIND & 0B00010000)) && (!(PIND & 0B00000100))))

      == HIGH) {

    PORTB = PORTB | 0B000010;


  } else {

    PORTB = PORTB & 0B111101;
  }





  // Condition for Output 2




  if ((((!(PIND & 0B00100000)) && (PIND & 0B00010000) && (PIND & 0B00001000))

       || ((PIND & 0B00100000) && (PIND & 0B00010000) && (!(PIND & 0B00001000)))
       || ((!(PIND & 0B00100000)) && (!(PIND & 0B00010000)) && (PIND & 0B00000100))
       || ((!(PIND & 0B00010000)) && (!(PIND & 0B00001000)) && (!(PIND & 0B00000100))))
      == HIGH) {

    PORTB = PORTB | 0B000100;

  } else {

    PORTB = PORTB & 0B111011;
  }







  // Condition for Output 3





  if ((((PIND & 0B00100000) && (!(PIND & 0B00010000))) || ((PIND & 0B00100000) && (!(PIND & 0B00001000)))
       || ((!(PIND & 0B00100000)) && (PIND & 0B00010000) && (PIND & 0B00001000))
       || ((!(PIND & 0B00100000)) && (PIND & 0B00001000) && (!(PIND & 0B00000100))))
      == HIGH) {



    PORTB = PORTB | 0B001000;
  } else {

    PORTB = PORTB & 0B110111;
  }
}