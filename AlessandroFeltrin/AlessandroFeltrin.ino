int rosso;
int giallo;
int bianco;
int verde;
int durataRosso;
int durataGiallo;
int durataBianco;
int durataVerde; 

void setup() {
rosso=13;
giallo=11;
bianco=7;
verde=5;

pinMode(rosso,OUTPUT);
pinMode(giallo,OUTPUT);
pinMode(bianco,OUTPUT);
pinMode(verde,OUTPUT);

Serial.begin(9600);
}

void loop() {


}

void AccendiLed(int led,int tempo)
{
  digitalWrite(led,HIGH);
  delay(tempo);
  digitalWrite(led,LOW);
}
