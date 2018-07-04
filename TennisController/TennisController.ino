void setup()
{
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int left = analogRead(0);
  int right = analogRead(1);
  Serial.print(left);
  Serial.print(" ");
  Serial.print(right);
  Serial.print("\n");
  delay(25);
}
 
