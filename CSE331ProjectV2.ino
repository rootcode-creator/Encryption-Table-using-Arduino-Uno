#define LED_PIN0 8
#define BUTTON_PIN0 2

#define LED_PIN1 9
#define BUTTON_PIN1 3

#define LED_PIN2 10
#define BUTTON_PIN2 4

#define LED_PIN3 11
#define BUTTON_PIN3 5

void setup() {
  pinMode(LED_PIN0, OUTPUT);
  pinMode(BUTTON_PIN0, INPUT);

  pinMode(LED_PIN1, OUTPUT);
  pinMode(BUTTON_PIN1, INPUT);


  pinMode(LED_PIN2, OUTPUT);
  pinMode(BUTTON_PIN2, INPUT);

  pinMode(LED_PIN3, OUTPUT);
  pinMode(BUTTON_PIN3, INPUT);
}
void loop() {

  // Condition for Output 0

  if ((((!digitalRead(BUTTON_PIN2)) && (!digitalRead(BUTTON_PIN1))) || ((!digitalRead(BUTTON_PIN3)) && (!digitalRead(BUTTON_PIN2)) && (!digitalRead(BUTTON_PIN0)))
       || ((digitalRead(BUTTON_PIN3)) && (!digitalRead(BUTTON_PIN1)) && (digitalRead(BUTTON_PIN0))))
      == HIGH) {

    digitalWrite(LED_PIN0, HIGH);
  } else {
    digitalWrite(LED_PIN0, LOW);
  }





  // Condition for Output 1


  if ((((digitalRead(BUTTON_PIN2)) && (!digitalRead(BUTTON_PIN1)) && (digitalRead(BUTTON_PIN0)))
       || ((!digitalRead(BUTTON_PIN2)) && (digitalRead(BUTTON_PIN1)) && (!digitalRead(BUTTON_PIN0)))
       || ((digitalRead(BUTTON_PIN3)) && (!digitalRead(BUTTON_PIN2)) && (digitalRead(BUTTON_PIN1)))
       || ((!digitalRead(BUTTON_PIN3)) && (digitalRead(BUTTON_PIN2)) && (!digitalRead(BUTTON_PIN1)))
       || ((!digitalRead(BUTTON_PIN3)) && (digitalRead(BUTTON_PIN2)) && (digitalRead(BUTTON_PIN0)))
       || ((digitalRead(BUTTON_PIN3)) && (!digitalRead(BUTTON_PIN2)) && (!digitalRead(BUTTON_PIN0))))
      == HIGH) {

    digitalWrite(LED_PIN1, HIGH);
  } else {
    digitalWrite(LED_PIN1, LOW);
  }





  // Condition for Output 2


  if ((((!digitalRead(BUTTON_PIN3)) && (digitalRead(BUTTON_PIN2)) && (digitalRead(BUTTON_PIN1)))
       || ((digitalRead(BUTTON_PIN3)) && (digitalRead(BUTTON_PIN2)) && (!digitalRead(BUTTON_PIN1)))
       || ((!digitalRead(BUTTON_PIN3)) && (!digitalRead(BUTTON_PIN2)) && (digitalRead(BUTTON_PIN0)))
       || ((!digitalRead(BUTTON_PIN2)) && (!digitalRead(BUTTON_PIN1)) && (!digitalRead(BUTTON_PIN0))))
      == HIGH) {
    digitalWrite(LED_PIN2, HIGH);
  } else {
    digitalWrite(LED_PIN2, LOW);
  }







  // Condition for Output 3


  if ((((digitalRead(BUTTON_PIN3)) && (!digitalRead(BUTTON_PIN2))) || ((digitalRead(BUTTON_PIN3)) && (!digitalRead(BUTTON_PIN1)))
       || ((!digitalRead(BUTTON_PIN3)) && (digitalRead(BUTTON_PIN2)) && (digitalRead(BUTTON_PIN1)))
       || ((!digitalRead(BUTTON_PIN3)) && (digitalRead(BUTTON_PIN1)) && (!digitalRead(BUTTON_PIN0))))
      == HIGH) {
    digitalWrite(LED_PIN3, HIGH);
  } else {
    digitalWrite(LED_PIN3, LOW);
  }
}