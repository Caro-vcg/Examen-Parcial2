int boton1 = 2;
int ledr = 3;
int boton2 = 4;
int ledb = 5;
int boton3 = 6;
int ledg = 7;
int estado1;
int estado2;
int estado3;

void setup()
{
  pinMode(boton1,INPUT_PULLUP);
  pinMode(ledr,OUTPUT);
  pinMode(boton2,INPUT_PULLUP);
  pinMode(ledb,OUTPUT);
  pinMode(boton3,INPUT_PULLUP);
  pinMode(ledg,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
   
   if (estado1 & estado2 & estado3 == 1){
    digitalWrite(ledr,HIGH);
    digitalWrite(ledg,HIGH);
    digitalWrite(ledb,HIGH);
    delay(1000);
    digitalWrite(ledr,LOW);
    digitalWrite(ledg,LOW);
    digitalWrite(ledb,LOW);
    delay(1000);
   }
    
  estado1 = digitalRead(boton1);
  if(estado1 == 0){
    digitalWrite(ledr,HIGH);
    delay(1000);
    digitalWrite(ledr,LOW);
    delay(1000);
  }
  
   estado2 = digitalRead(boton2);
  if(estado2 == 0){
    digitalWrite(ledb,HIGH);
    delay(1000);
    digitalWrite(ledb,LOW);
    delay(1000);
  
  } 
  
  estado3 = digitalRead(boton3);
  if(estado3 == 0){
    digitalWrite(ledg,HIGH);
    delay(1000);
    digitalWrite(ledg,LOW);
    delay(1000);
 
  }
    if(estado1 == 0 && estado2 == 0 && estado3 == 1){
    digitalWrite(ledr, HIGH);
    digitalWrite(ledb, HIGH);
    digitalWrite(ledg, LOW);
    delay(1000);
    digitalWrite(ledr, LOW);
    digitalWrite(ledb, LOW);
    digitalWrite(ledg, LOW);
    delay(1000);
     Serial.println("morado");
  }
 
  
 
    if(estado1 == 0 && estado2 == 1 && estado3 == 0){
     digitalWrite(ledr, HIGH);
    digitalWrite(ledb, LOW);
    digitalWrite(ledg, HIGH);
    delay(1000);
    digitalWrite(ledr, LOW);
    digitalWrite(ledb, LOW);
    digitalWrite(ledg, LOW);
    delay(1000);
    
   Serial.println("amarillo");
  }
  
    if(estado1 == 1 && estado2 == 0 && estado3 == 0){
     digitalWrite(ledr, LOW);
    digitalWrite(ledb, HIGH);
    digitalWrite(ledg, HIGH);
    delay(1000);
    digitalWrite(ledr, LOW);
    digitalWrite(ledb, LOW);
    digitalWrite(ledg, LOW);
    delay(1000);
    Serial.println("celeste");
 
  }
  
 
 
}
