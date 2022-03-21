// C++ code
//
  const int bot1 = 4;
const int bot2 = 5;
const int bot3 = 6;
const int bot4 = 7;
const int bot5 = 8;

void setup()
{
Serial.begin(9600);
  pinMode(bot1,INPUT);
  pinMode(bot2,INPUT);
  pinMode(bot3,INPUT);
  pinMode(bot4,INPUT);
  pinMode(bot5,INPUT);

}

int var;
int var2;
int var3;
int var4;
int var5;

void loop()
{

var = digitalRead(bot1);
var2 = digitalRead(bot2);
var3 = digitalRead(bot3);
var4 = digitalRead(bot4);
var5 = digitalRead(bot5);
  
  if(var){
Serial.println("oi tio");
  }
  if(var2){
Serial.println("como esta?");
  }
  if(var3){
Serial.println("vou ganhar um 10 ne?");
  }
  if(var4){
Serial.println("scururururuurururu");
  }
  if(var5){
Serial.println("tchau tio");
  }
}
