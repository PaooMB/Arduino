int PWM_A = 3;
int DIR_A = 12;
int PWM_B = 11;
int DIR_B = 13;
int BK_A = 9;
int BK_B = 8;

void setup() {
  // Configure the A output
  pinMode (PWM_A, OUTPUT);  // Brake pin on channel A
  pinMode (DIR_A, OUTPUT);    // Direction pin on channel A
  pinMode (PWM_B, OUTPUT);  // Brake pin on channel B
  pinMode (DIR_B, OUTPUT);    // Direction pin on channel B
  pinMode (BK_A, OUTPUT);  // Brake pin on channel B
  pinMode (BK_B, OUTPUT); 
}

void loop() {

// Set the outputs to run the motor forward
  digitalWrite (BK_A, HIGH); 
  digitalWrite (BK_B, HIGH); 

  delay (5000);
  
  digitalWrite (DIR_A, HIGH);   // setting direction to HIGH the motor will spin forward
  analogWrite (PWM_A, 64);     // Set the speed of the motor, 255 is the maximum value
                 

  digitalWrite (DIR_B, HIGH);   // setting direction to HIGH the motor will spin forward
  analogWrite (PWM_B, 64);     // Set the speed of the motor, 255 is the maximum value
  delay (2000);

// SUBIR VELOCIDAD

  analogWrite (PWM_A, 128 );     // Set the speed of the motor to 0
  analogWrite (PWM_B, 128);     // Set the speed of the motor to 0
  delay (1000);

  analogWrite (PWM_A, 255);     // Set the speed of the motor to 0
  analogWrite (PWM_B, 255);     // Set the speed of the motor to 0
  delay (1000);

  digitalWrite (BK_A, LOW); 
  digitalWrite (BK_B, LOW); 
  delay(2000);

  //GIRAR HACIA B

  digitalWrite (BK_A, HIGH);
  analogWrite (PWM_A, 64); 
    analogWrite (PWM_A, 128);
      analogWrite (PWM_A, 255);

  //PARAR 

   digitalWrite (BK_B, LOW); 
    delay(1000);

  digitalWrite (BK_A, HIGH); 
  digitalWrite (BK_B, HIGH); 

// Set the outputs to run the motor backward

  digitalWrite (DIR_A, LOW);    // now change the direction to backward setting LOW the DIR_A pin
  digitalWrite (DIR_B, LOW);    // now change the direction to backward setting LOW the DIR_A pin

  // now change the direction to backward setting LOW the DIR_A pin

  //BAJAR VELOCIDAD MARCHA ATRAS
  
  analogWrite (PWM_A, 255);     // Set the speed of the motor A
  analogWrite (PWM_B, 255);     // Set the speed of the motor B
  delay (2000);

  analogWrite (PWM_A, 128);     // Set the speed of the motor A
  analogWrite (PWM_B, 128);     // Set the speed of the motor B
  delay (2000);

  analogWrite (PWM_A, 64);     // Set the speed of the motor A
  analogWrite (PWM_B, 64);     // Set the speed of the motor B
   delay (2000);

   analogWrite (PWM_A, 0);     // Set the speed of the motor A
  analogWrite (PWM_B, 0);     // Set the speed of the motor B


   digitalWrite (BK_A, LOW);  // Stop motor A
   digitalWrite (BK_B, LOW);  // Stop motor B
   delay (1000);




    // GIRAR HACIA A


  digitalWrite (BK_B, HIGH); // Enable motor B
     analogWrite (PWM_B, 64);        // Speed of the motor B
        analogWrite (PWM_B, 128);     // Speed of the motor B
          analogWrite (PWM_B, 255);   // Speed of the motor B

  //PARAR 

    digitalWrite (BK_B, LOW);  // Stop motor B
    delay(1000);


  // QUITAR FRENOS
    digitalWrite (BK_A,HIGH); 
  digitalWrite (BK_B, HIGH); 


  

  

  
}
