









// Setup //
void setup(){
const int SerialCommunicationSpeed = 9600;
Serial.begin(SerialCommunicationSpeed);
LEDSETMATRIX(1,1,1,1,1);
delay(500);
LEDFLASHMATRIX(3,250);


}







// Loop //
void loop(){}