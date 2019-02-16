int rosso;
int giallo;
int bianco;
int verde;

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
  // put your main code here, to run repeatedly:

}
