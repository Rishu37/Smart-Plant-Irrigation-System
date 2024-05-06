int soilMoistureValue = 0;

int percentage=0;

void setup() {

  pinMode(3,OUTPUT);

  Serial.begin(9600);

}

void loop() {

soilMoistureValue = analogRead(A0);

Serial.println(percentage);

percentage = map(soilMoistureValue, 490, 1023, 100, 0);

if(percentage < 10)  

{

  Serial.println(" Pump On");

  digitalWrite(3,LOW);

}

if(percentage >80)

{

  Serial.println("Pump Off");

  digitalWrite(4,HIGH);

}

}

