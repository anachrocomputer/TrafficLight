
#define RED_ASPECT    (4)  // 11 for Uno; 4 for Nano
#define AMBER_ASPECT  (5)  // 10 for Uno; 5 for Nano
#define GREEN_ASPECT  (6)  // 9 for Uno; 6 for Nano

void setup(void)
{
  pinMode(RED_ASPECT, OUTPUT);
  pinMode(AMBER_ASPECT, OUTPUT);
  pinMode(GREEN_ASPECT, OUTPUT);
  
  digitalWrite(RED_ASPECT, LOW);
  digitalWrite(AMBER_ASPECT, LOW);
  digitalWrite(GREEN_ASPECT, LOW);
}

void loop(void)
{
  digitalWrite(RED_ASPECT, HIGH);
  delay(5000);
  digitalWrite(AMBER_ASPECT, HIGH);
  delay(2000);
  digitalWrite(RED_ASPECT, LOW);
  digitalWrite(AMBER_ASPECT, LOW);
  digitalWrite(GREEN_ASPECT, HIGH);
  delay(6000);
  digitalWrite(GREEN_ASPECT, LOW);
  digitalWrite(AMBER_ASPECT, HIGH);
  delay(3000);
  digitalWrite(AMBER_ASPECT, LOW);
}
