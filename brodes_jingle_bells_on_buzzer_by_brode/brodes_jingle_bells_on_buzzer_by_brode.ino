int buzzer = 8; //This can be any pwm digital pin (on which you've connected your buzzer to)

int c = 262, d = 294, e = 330, f = 349, g = 392, a = 440, b = 494; //& note variables

//I put my code in the setyp function
//This way I can play the song once; and I'll press the restart button to play again

void setup() {

  //eee Jingle bells * 2
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      tone(buzzer, e, 500);
      delay(500);
    }
    delay(500);
  }

  //egcde Jingle all the way
  tone(buzzer, e, 500);
  delay(500);
  tone(buzzer, g, 500);
  delay(500);
  tone(buzzer, c, 800);
  delay(700);
  tone(buzzer, d, 700);
  delay(200);
  tone(buzzer, e, 800);

  delay(1500);

  //ffff OH what fun brode
  for (int i = 0; i < 2; i++) {
    tone(buzzer, f, 500);
    delay(500);
  }
  tone(buzzer, f, 1000);

  delay(500);

  //fee -it is to ride
  tone(buzzer, f, 300);
  delay(300);
  for (int i = 0; i < 2; i++) {
    tone(buzzer, f, 500);
    delay(500);
  }
  tone(buzzer, e, 500);

  delay(75);

  //eeggfdc in a one horse, open sleigh brode
  for (int i = 0; i < 2; i++) {
    tone(buzzer, e, 500);
    delay(500);
  }
  for (int i = 0; i < 2; i++) {
    tone(buzzer, g, 500);
    delay(500);
  }
  tone(buzzer, f, 500);
  delay(500);
  tone(buzzer, d, 500);
  delay(500);
  tone(buzzer, c, 500);
}

void loop() {} //put whatevers' in the setup() here to play the song infinitely brode