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

void loop() 
{
  RichiestaValori();
  AccendiLed(rosso,durataRosso);
  AccendiLed(giallo,durataGiallo);
  AccendiLed(bianco,durataBianco);
  AccendiLed(verde,durataVerde);
}

void AccendiLed(int led,int tempo)
{
  digitalWrite(led,HIGH);
  delay(tempo);
  digitalWrite(led,LOW);
}

void RichiestaValori()
{
  durataRosso = RichiestaTempo("Qunato vuoi che duri il rosso?(input in secondi)");
  durataGiallo = RichiestaTempo("Qunato vuoi che duri il giallo?(input in secondi)");
  durataBianco = RichiestaTempo("Qunato vuoi che duri il bianco?(input in secondi)");
  durataVerde = RichiestaTempo("Qunato vuoi che duri il verde?(input in secondi)");
}

int RichiestaTempo(String domanda)
{
  Serial.println(domanda);
  while(Serial.available()==0) {};
  String risposta = Serial.readString();
  int valoreTempo = risposta.toInt();
  return valoreTempo = valoreTempo*1000;
}
