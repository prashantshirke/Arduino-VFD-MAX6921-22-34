int clk = 3;
int load = 5;
int din = 4;
int blank = 6;

int scandelay= 1; 
int a[64] = {1,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0};

int b[64] = {0,1,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0};

int c[64] = {0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,0,
0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0};

int d[64] = {0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,
0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0};

int e[64] = {0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0};

int f[64] = {0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,
0,1,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0};

int g[64] = {0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,0};

int h[64] = {0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1};

 
void setup() {
  pinMode(din, OUTPUT);
  pinMode(load, OUTPUT);
  pinMode(clk, OUTPUT);
  pinMode(blank, OUTPUT);
  digitalWrite(clk, LOW);
  digitalWrite(load, LOW);
  digitalWrite(din, LOW);

  analogWrite(blank, 10);
}
 
void loop() {

 
//-----------------------------------------------------------  
  for (int i = 63; i >= 0; i--) {
    digitalWrite(din, a[i]);
    digitalWrite(clk, HIGH);
    delay(1);
    digitalWrite(clk, LOW);
    delay(1);
  }
 
  digitalWrite(load, HIGH);
  delay(1);
  digitalWrite(load, LOW);
 
  delay(scandelay);
//-----------------------------------------------------------
for (int i = 63; i >= 0; i--) {
    digitalWrite(din, b[i]);
    digitalWrite(clk, HIGH);
    delay(1);
    digitalWrite(clk, LOW);
    delay(1);
  }
 
  digitalWrite(load, HIGH);
  delay(1);
  digitalWrite(load, LOW);
 
  delay(scandelay);
//-----------------------------------------------------------
for (int i = 63; i >= 0; i--) {
    digitalWrite(din, c[i]);
    digitalWrite(clk, HIGH);
    delay(1);
    digitalWrite(clk, LOW);
    delay(1);
  }
 
  digitalWrite(load, HIGH);
  delay(1);
  digitalWrite(load, LOW);
 
  delay(scandelay);
//-----------------------------------------------------------
for (int i = 63; i >= 0; i--) {
    digitalWrite(din, d[i]);
    digitalWrite(clk, HIGH);
    delay(1);
    digitalWrite(clk, LOW);
    delay(1);
  }
 
  digitalWrite(load, HIGH);
  delay(1);
  digitalWrite(load, LOW);
 
  delay(scandelay);
//-----------------------------------------------------------
for (int i = 63; i >= 0; i--) {
    digitalWrite(din, e[i]);
    digitalWrite(clk, HIGH);
    delay(1);
    digitalWrite(clk, LOW);
    delay(1);
  }
 
  digitalWrite(load, HIGH);
  delay(1);
  digitalWrite(load, LOW);
 
  delay(scandelay);
//-----------------------------------------------------------
for (int i = 63; i >= 0; i--) {
    digitalWrite(din, f[i]);
    digitalWrite(clk, HIGH);
    delay(1);
    digitalWrite(clk, LOW);
    delay(1);
  }
 
  digitalWrite(load, HIGH);
  delay(1);
  digitalWrite(load, LOW);
 
  delay(scandelay);
//-----------------------------------------------------------
for (int i = 63; i >= 0; i--) {
    digitalWrite(din, g[i]);
    digitalWrite(clk, HIGH);
    delay(1);
    digitalWrite(clk, LOW);
    delay(1);
  }
 
  digitalWrite(load, HIGH);
  delay(1);
  digitalWrite(load, LOW);
 
  delay(scandelay);
//-----------------------------------------------------------
for (int i = 63; i >= 0; i--) {
    digitalWrite(din, h[i]);
    digitalWrite(clk, HIGH);
    delay(1);
    digitalWrite(clk, LOW);
    delay(1);
  }
 
  digitalWrite(load, HIGH);
  delay(1);
  digitalWrite(load, LOW);
 
  delay(scandelay);
//-----------------------------------------------------------
}
