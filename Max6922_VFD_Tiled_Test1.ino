int clk = 3;
int load = 5;
int din = 4;
int blank = 6;
 
int a[64] = {1,1,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,1,
1,1,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,0};

int b[64] = {0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,1,
1,1,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,0};
 
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
//-----------------------------------------------------------  
  for (int i = 63; i >= 0; i--) {
    digitalWrite(din, a[i]);
    digitalWrite(clk, HIGH);
    delay(10);
    digitalWrite(clk, LOW);
    delay(10);
  }
 
  digitalWrite(load, HIGH);
  delay(10);
  digitalWrite(load, LOW);
 
  delay(1000);
//-----------------------------------------------------------
  for (int i = 63; i >= 0; i--) {
    digitalWrite(din, b[i]);
    digitalWrite(clk, HIGH);
    delay(10);
    digitalWrite(clk, LOW);
    delay(10);
  }
 
  digitalWrite(load, HIGH);
  delay(10);
  digitalWrite(load, LOW);
 
  delay(1000);
//----------------------------------------------------------- 
  /*  k = k + 1;
  if (k > 63) k = 0;

  for (int i=100; i<= 255; i++){
   analogWrite(blank, i);
   Serial.println (i);
   delay(20);
  }
  */
}
