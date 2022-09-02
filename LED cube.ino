int ledpins[] = {3,4,5,6};
int groundpins[] = {A1,A0};
void setup ()
{
  for(int i = 0; i < 4; i++)
  {       
      pinMode(ledpins[i],OUTPUT);
  }                         
  for (int i= 0; i<2; i++)
  {pinMode(groundpins[i],OUTPUT);}

}

void loop()
{
p1();
p3();
p2();
}

void def()
{
  int delaytime=500;
  digitalWrite(groundpins[0],LOW);
  digitalWrite(groundpins[1],LOW);
  digitalWrite(ledpins[0],HIGH);
  digitalWrite(ledpins[1],HIGH);
  digitalWrite(ledpins[2],HIGH);
  digitalWrite(ledpins[3],HIGH);
}

void p1()
{
  int delaytime=500;
  def();   
  for(int i=0; i<4; i++)
  {
    digitalWrite(groundpins[0],HIGH);
    digitalWrite(ledpins[i],LOW);
    delay(delaytime);
    def();
  }
  def();
  for(int i=0; i<4; i++)
  {
    digitalWrite(groundpins[1],HIGH);
    digitalWrite(ledpins[i],LOW);
    delay(delaytime);
    def();
  }
}

void p2()
{
  int delaytime=500;
  def();
  for(int i=3; i>=0; i--)
  {
    digitalWrite(groundpins[1],HIGH);
    digitalWrite(ledpins[i],LOW);
    delay(delaytime);
    def();
  }
  def();
  for(int i=3; i>=0; i--)
  {
    digitalWrite(groundpins[0],HIGH);
    digitalWrite(ledpins[i],LOW);
    delay(delaytime);
    def();
  }
}

void def2()
{
  int delaytime=500;
  digitalWrite(groundpins[0],LOW);
  digitalWrite(groundpins[1],LOW);
  digitalWrite(ledpins[0],LOW);
  digitalWrite(ledpins[1],LOW);
  digitalWrite(ledpins[2],LOW);
  digitalWrite(ledpins[3],LOW);
  delay(delaytime);
}

void p3()
{
  int i=0;
  def2();
  for(int i=0;i<2;i++)
  {
    digitalWrite(groundpins[i],HIGH);
    delay(1000);
    def2();
  }
}
