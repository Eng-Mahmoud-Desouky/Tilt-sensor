int tilt = 2;
int dc = 3;
void setup()
{
  pinMode(tilt,INPUT);
  pinMode(dc,OUTPUT);
}
void loop()
{
  int tiltReading = digitalRead(tilt);
  if(tiltReading == 1){
  digitalWrite(dc,1);
  }
  else{
  digitalWrite(dc,0);
  }
}
