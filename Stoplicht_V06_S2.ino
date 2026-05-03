int switchState = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode(13, OUTPUT);
 //13 knop

// -ato-
 pinMode(12, OUTPUT);
 //12 oranje  --ato
 pinMode(11, OUTPUT);
 //11 rood    --ato

// -voet-
 pinMode(10, OUTPUT);
 //10 groen   --voet
 
// -schakeling uit-
 pinMode(8, OUTPUT); //ato
 pinMode(7, OUTPUT); //VOET

 pinMode(4, INPUT);
 //4 is teken knop is gedrukt

 pinMode(1, OUTPUT); //Relai schakelaar 1
 pinMode(2, OUTPUT); //Relai SChakelaar 2

 pinMode(5, OUTPUT); //piezo



 digitalWrite(8, HIGH);
 digitalWrite(7, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(13, HIGH);
 //knop
 delay(200);
 { switchState = digitalRead(4);
 if (switchState == HIGH) {
  delay(200);
  tone(5, 75);
  delay(300);
  noTone(5);
  
  delay(2000);

  digitalWrite(8, LOW);
  digitalWrite(12, HIGH);
  delay(6000);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(6000);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  
  tone(5, 75);

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);

  noTone(5);

  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //1

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //2

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //3

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //4

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //5
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //1

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //2

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //3

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //4

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(500); //5

  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(500); //5,5
  

  //delay(5500);
  
  digitalWrite(10, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400);
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(400);//1
  
  digitalWrite(10,HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400);
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(400); //2
  
  digitalWrite(10,LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400);
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(400); //3
  
  digitalWrite(10,HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400);
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(400); //4
  
  digitalWrite(10,LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400);
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(400); //5
  tone(5, 75);
  digitalWrite(10,HIGH); 
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400);
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(400); //6
  
  digitalWrite(10,LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400);
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(400); //7
  
  digitalWrite(10,HIGH); 
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400); 
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(400); //8
  
  digitalWrite(10,LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(400); 
  
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  
  delay(400); //9
  digitalWrite(1, LOW);
  digitalWrite(10,HIGH); 

  delay(400); 
  digitalWrite(10, LOW);
  delay(400);
  digitalWrite(7, HIGH);
  delay(300);
  noTone(5);
  

  delay(5000);
  
 }
 
 else {
  delay(200);
  
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(11, LOW);
  
 }
 }
}


//made by WPEB