int button_r = 5;
int led_r = 3;

int btn_g = 4;
int led_g = 2;

void setup()
{
  pinMode(btn_r, INPUT);
  pinMode(btn_g, INPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_r, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  Serial.println(digitalRead(btn_g));
  if(digitalRead(btn_g) == 1){
  	digitalWrite(led_g,HIGH);
  }
  else{
    digitalWrite(led_g,LOW);
  }
  if(digitalRead(button_r) == 1){
  	digitalWrite(led_r,HIGH);
  }
  else{
    digitalWrite(led_r,LOW);
  }
  delay(500);
}
