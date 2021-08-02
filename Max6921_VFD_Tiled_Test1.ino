int clk = 3;
int load = 5;
int din = 4;
int blank = 6;
 
int a[30] = {0,0,0,0,0,0,0,0,0,0,1
,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,1
,1,1,1,1};
 
int k = 0;
 
void setup() {
  pinMode(din, OUTPUT);
  pinMode(load, OUTPUT);
  pinMode(clk, OUTPUT);
  pinMode(blank, OUTPUT);
  digitalWrite(clk, LOW);
  digitalWrite(load, LOW);
  digitalWrite(din, LOW);
}
 
void loop() {
  
  for (int i = 29; i >= 0; i--) {
    digitalWrite(din, a[i]);
    digitalWrite(clk, HIGH);
    delay(10);
    digitalWrite(clk, LOW);
    delay(10);
  }
 
  digitalWrite(load, HIGH);
  delay(10);
  digitalWrite(load, LOW);
 
  delay(200);
 
  k = k + 1;
  if (k > 29) k = 0;
  
  for (int i=100; i<= 255; i++){
   analogWrite(blank, i);
   Serial.println (i);
   delay(20);
  }
  
}
