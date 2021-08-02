int clk = 3;
int load = 5;
int din = 4;
 
int a[20] = {0,0,0,0,0,0,0,0,0,0,1
,0,0,0,0,0,0,0,0,0};
 
int k = 0;
 
void setup() {
  pinMode(din, OUTPUT);
  pinMode(load, OUTPUT);
  pinMode(clk, OUTPUT);
  digitalWrite(clk, LOW);
  digitalWrite(load, LOW);
  digitalWrite(din, LOW);
}
 
void loop() {
  for (int i = 0; i < 20; i++) {
    if (i == k) digitalWrite(din, 1);
    else  digitalWrite(din, 0);
    digitalWrite(clk, HIGH);
    delay(10);
    digitalWrite(clk, LOW);
    delay(10);
  }
  digitalWrite(clk, LOW);
 
  for (int i = 19; i >= 0; i--) {
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
  if (k > 19) k = 0;
}
