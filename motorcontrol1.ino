
int mtra = 6;
int mtrb = 7;
int mtrx = 8;
int mtry = 9;
void setup() {

  pinMode(mtra, OUTPUT);
  pinMode(mtrb, OUTPUT);
pinMode(mtrx, OUTPUT);
  pinMode(mtry, OUTPUT);
}

void loop() {
  
}  
void motor1clockwise() {
  digitalWrite(mtra, HIGH);
  digitalWrite(mtrb, LOW);
}
void motoro1anticlockwise() {
  digitalWrite(mtra, LOW);
  digitalWrite(mtrb, HIGH);
}
void motor2clockwise() {
  digitalWrite(mtrx, HIGH);
  digitalWrite(mtry, LOW);
}
void motoro2anticlockwise() {
  digitalWrite(mtrx, LOW);
  digitalWrite(mtry, HIGH);
}
