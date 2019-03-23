int ledPin1 = 2; 
int ledPin2 = 3;
int ledPin3 = 4; 
int ledPin4 = 5;
int ledPin5 =  6; 
int ledPin6 =  7;
int ledPin7 =  8; 
int ledPin8 =  9;
int ledPin9 =  10; 
int ledPin10 = 14;  // = A0
int ledPin11 = 15;  // = A1
int ledPin12 = 16;  // = A2
int kurk = 0;       // ledState heet nu kurk en bijbehorende LOW is vervangen door 0.
int t200 = 180;     // om delay te veranderen 


void setup() {     
    pinMode(ledPin1, OUTPUT); 
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT); 
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin5, OUTPUT); 
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin7, OUTPUT); 
    pinMode(ledPin8, OUTPUT);
    pinMode(ledPin9, OUTPUT); 
    pinMode(ledPin10, OUTPUT);
    pinMode(ledPin11, OUTPUT); 
    pinMode(ledPin12, OUTPUT);
    digitalWrite(A0, 0);
    digitalWrite(A1, 0);
    digitalWrite(A2, 0);
    } 

      class Functie {   
          public:
  Functie Z(int z) {  
    kurk = digitalRead(z);  
    if (kurk == HIGH) { digitalWrite(z, 0);  } 
    else { digitalWrite(z, HIGH);      } 
   return *this;
  } 
  Functie L(int a) {    //  voor de analoge pinnen A0-2
    kurk = digitalRead(a);  
    if (kurk == HIGH) { digitalWrite(a, 0);  } 
    else { digitalWrite(a, HIGH);      } 
     return *this;
     }
  Functie P() {    // P = Pause ter vervanging van de delays
      delay(t200);
      return *this;
   }
  }roep;       
  
// *******************   einde class Functie   ******************

void Lall(){      // Lall wordt 4x aangeroepen
   roep. L(14).    L(15).    L(16);
}
void Zall(){  
    roep.Z(2).    Z(3).    Z(4).    Z(5).    Z(6).    Z(7).    Z(8).    Z(9).    Z(10);
}
void X1(){
    roep.Z(2).    Z(3).    Z(4);
}
void X2(){
    roep.Z(4).    Z(5).    Z(6);
}
void X3(){
    roep.Z(8).    Z(9).    Z(10);
}
void Y1(){
    roep.Z(2).    Z(5).    Z(8);
}
void Y2(){
    roep.Z(3).    Z(6).    Z(9);
}
void Y3(){
    roep. Z(4).    Z(7).    Z(10);
}
void loop(){   // Begin void loop
  
    for (int i = 0; i < 16; i++){
    roep.L(14);
    Y1();
    //roep.P();
    roep.P().L(14);
    Y1();
    roep.L(15);
    Y2();
    roep.P().L(15);
    Y2();
    roep.L(16);
    Y3();
    roep.P().L(16);
    Y3;
}
    for (int i = 0; i < 16; i++){
    roep.L(15);
    Y1();
    Y2();
    Y3();
    roep.P().L(15);
    Y1();
    Y2();
    Y3();
}
    for (int i = 0; i < 16; i++){     
    roep.L(14);
    Y3();
    roep.P().L(14);
    Y3();
    roep.L(15);
    Y2();
    roep.P().L(15);
    Y2();
    roep.L(16);
    Y1();
    roep.P().L(16);
    Y1();
}
    for (int i = 0; i < 16; i++){  
    roep.L(14).    L(15).    L(16);
    Y2();
    roep.P().L(14).    L(15).    L(16);
    Y2();
}
    for (int i = 0; i < 16; i++){
    roep.L(14);
    Y1();
    roep.P().L(14);
    Y1();
    roep.L(15);
    Y2();
    roep.P().L(15);
    Y2();
    roep.L(16);
    Y3();
    roep.P().L(16);
    Y3;
}
    for (int i = 0; i < 16; i++){
    roep.L(15);
    Y1();
    Y2();
    Y3();
    roep.P().L(15);
    Y1();
    Y2();
    Y3();
}
    for (int i = 0; i < 16; i++){     
    roep.L(14);
    Y3();
    roep.P().L(14);
    Y3();
    roep.L(15);
    Y2();
    roep.P().L(15);
    Y2();
    roep.L(16);
    Y1();
    roep.P().L(16);
    Y1();
}
    for (int i = 0; i < 16; i++){   
    roep.L(14).   L(15).    L(16);
    Y2();
    roep.P().L(14).    L(15).    L(16);
    Y2();
}  
for (int i = 0; i < 16; i++){  
    roep.L(14).Z(2).Z(4).Z(8).Z(10).P().Z(2).    Z(4).    Z(8).    Z(10).    Z(3).    Z(5).    Z(7).    Z(9);
    roep.P().Z(3).Z(5).    Z(7).    Z(9).L(14);
}

    for (int i = 0; i < 16; i++){
    roep.L(15).Z(2).    Z(4).    Z(8).    Z(10).P().Z(2).    Z(4).    Z(8).    Z(10).    Z(3).    Z(5).    Z(7).    Z(9);
    roep.P().Z(3).    Z(5).    Z(7).    Z(9).L(15);
}
    for (int i = 0; i < 16; i++){
    roep.L(16).Z(2).    Z(4).    Z(8).    Z(10).P().Z(2).    Z(4).    Z(8).   Z(10).    Z(3).    Z(5).    Z(7).    Z(9);
    roep.P().Z(3).   Z(5).   Z(7).    Z(9).L(16);
}
    for (int i = 0; i < 16; i++){
    roep.L(16);
    Y1();
    roep.P();
    Y1();
    Y2();
    roep.P();
    Y2();
    Y3();
    roep.P().L(16).    L(15). P();
    Y3();
    Y2();
    roep.P();
    Y2();
    Y1();
    roep.P().L(15).    L(14).P();
    Y1();
    Y2();
    roep.P();
    Y2();
    Y3();
    roep.P();
    Y3();
    roep.L(14);
}
    for (int i = 0; i < 4; i++){
    roep.L(14).Z(2).P().Z(2).    Z(3).P().Z(3).    Z(4).P().Z(4).    Z(7);
    roep.P(). Z(7).    Z(6).P(). Z(6).    Z(5).P(). Z(5).    Z(8);
    roep.P(). Z(9).    Z(10).P().L(14).    L(15).P().Z(10).    Z(9);
    roep.P().Z(9).    Z(8).P().Z(8).    Z(5).P().Z(5).    Z(6).P();
    roep.Z(6).    Z(7).P().Z(7).    Z(4).P().Z(4).    Z(3);
    roep.P().Z(3).    Z(2).P().L(15).    L(16).P().Z(2).    Z(3).P();
    roep.Z(3).    Z(4).P().Z(4).    Z(7).P().Z(7).    Z(6).P();
    roep.Z(6).    Z(5).P().Z(5).    Z(8).P().Z(9).    Z(10).P().L(16).Z(10);
}
    roep.L(14).Z(2);    roep.P();    roep.Z(3);    roep.P();    roep.Z(4);
    roep.P();    roep.Z(2).Z(7);    roep.P();    roep.Z(3).    Z(6);    roep.P();
    roep.Z(4).    Z(5);    roep.P();    roep.Z(7).    Z(8);    roep.P();    roep.Z(6).    Z(9);
    roep.P();    roep.Z(5).    Z(10);    roep.P();    roep.Z(8).    Z(9).L(15);    roep.P();
    roep.L(14).Z(8);    roep.P();    roep.Z(10).    Z(5);    roep.P();    roep.Z(9).    Z(2);
    roep.P();    roep.Z(8).    Z(3);    roep.P();    roep.Z(5).    Z(4);    roep.P();    roep.L(14).L(16);
    
    roep.P();        Lall();        roep.P();    Lall();    roep.P();    Lall();    roep.P();    Lall();
    roep.P();    X1();    X2();
    roep.P();    X2();    X3();
    roep.P();    X3();    X2();
    roep.P();    X2();    X1();
    roep.P();    roep.Z(4).        Z(5);    roep.P();    roep.Z(3).    Z(8);
    roep.P();    Y1();    Y2();
    roep.P();    Y2();    Y3();
    roep.P();    Y3();    Y2();
    roep.P();    Y2();    Y1();
    roep.P();    roep.L(16);    roep.P();    roep.L(15);    roep.P();    roep.L(14);
    Y1();

    for (int i = 0; i < 8; i++){
        roep.L(14);
        Zall;
        roep.P();        roep.L(14).        L(15);        roep.P();        roep.L(15).        L(16);
        roep.P();        roep.L(16);
}

   for (int i = 0; i < 4; i++){
        roep.L(14);
        Zall();
        roep.P();        roep.L(14).        L(15);        roep.P();        roep.L(15).        L(16);
        roep.P();        roep.L(16); 
}
    
        roep.L(14);
        Y1();
        roep.P();
        Y1();        Y2();
        roep.P();
        Y2();        Y3();
        roep.P();
        roep.L(14).        L(15);        roep.P();
        Y3();        Y2();
        roep.P();
        Y2();        Y1();
        roep.P();        roep.L(15).        L(16);
        roep.P();
        Y1();        Y2();
        roep.P();
        Y2();        Y3();
        roep.P();
        Y3();
        roep.L(16);

    for (int i = 0; i < 10; i++){
        roep.L(14);
        X3();
        roep.P();        roep.L(14).        L(15);
        X3();
        X2();
        roep.P();        roep.L(15).        L(16);
        X2();
        X1();
        roep.P();        roep.L(16);
        X1();
}
   for (int i = 0; i < 10; i++){
        X2();
        roep.L(14);        roep.P();        roep.L(14).        L(15);
        roep.P();        roep.L(15).        L(16);        roep.P();
        X2();
        roep.L(16);
}
    for (int i = 0; i < 10; i++){
    
        roep.L(14);
        X1();
        roep.P();        roep.L(14);
        X1();
        roep.L(15);
        X2();
        roep.P();        roep.L(15);
        X2();
        roep.L(16);
        X3();
        roep.P();        roep.L(16);
        X3();
}
        roep.L(15);
        Y1();        Y2();        Y3();        roep.P(); //delay(300);
        roep.L(15);
        Y1();
        Y2();
        Y3();

        
    for (int i = 0; i < 20; i++){
        roep.L(14).Z(3).        Z(5).       Z(7).        Z(9);        roep.P();
        roep.L(14).        L(15);        roep.P();        roep.L(15).        L(16);
        roep.P();        roep.L(16);
}
    for (int i = 0; i < 20; i++){
        roep.L(14).Z(2).        Z(4).        Z(8).        Z(10);        roep.P();
        roep.L(14).        L(15);        roep.P();        roep.L(15).        L(16);
        roep.P();        roep.L(16);
}
    for (int i = 0; i < 20; i++){
        roep.L(14).Z(3).        Z(5).        Z(7).        Z(9);        roep.P();
        roep.L(14).        L(15);                roep.P();        roep.L(15).        L(16);
        roep.P();        roep.L(16);
}
    for (int i = 0; i < 20; i++){
        roep.L(14).Z(2).        Z(4).        Z(8).        Z(10);
        roep.P();        roep.L(14).        L(15);        roep.P();
        roep.L(15).        L(16);        roep.P();        roep.L(16);
}
    for (int i = 0; i < 20; i++){
        roep.L(14).Z(3).        Z(5).        Z(7).        Z(9);
        roep.P();        roep.L(14).        L(15);        roep.P();
        roep.L(15).        L(16);        roep.P();        roep.L(16);
}
    for (int i = 0; i < 20; i++){
        roep.L(14).Z(2).     Z(4).        Z(8).        Z(10);
        roep.P();        roep.L(14).        L(15);        roep.P();
        roep.L(15).        L(16);        roep.P();        roep.L(16);
}
    }
