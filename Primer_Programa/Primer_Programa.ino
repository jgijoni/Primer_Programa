/******************************************************************
 **                                                              **       
 **                   Blink Led - Encesa Apagada Led                    ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
  int ledPin= 13; 

//***************  SETUP   ****************************************
void setup() {
  pinMode(ledPin, OUTPUT);  // inicialitza pin digital  13 com a  output.
            

}

//*************    LOOP   ******************************************
void loop() {
  digitalWrite(ledPin, HIGH);   // encèn LED  (posant HIGH al pin 13)
  delay(1000);              // espera d'un segon
  digitalWrite(ledPin, LOW);    // apaga  LED  posant un zero al a sortida 13 "LOW"
  delay(1000);              // espera un segon
}
