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
int t200 = 180;     // om delay te veranderen , er hadden eigenlijk ook een t250 en t500 en t100 moeten zijn maar helaas,dat is nu te laat


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

      class Functie {   // nieuw bijgekomen ********************************
    
    public:

  Functie Z(int z) {  
    kurk = digitalRead(z);  
    if (kurk == HIGH) { digitalWrite(z, 0);  } 
    else { digitalWrite(z, HIGH); 
     } 
   return *this;
  } 
  
  };
// *******************   einde nieuw bijgekomen class Functie   ******************

void L(int a) {    //  voor de analoge pinnen A0-2
    kurk = digitalRead(a);  
    if (kurk == HIGH) { digitalWrite(a, 0);  } 
    else { digitalWrite(a, HIGH); 
     } 
}

void Lall(){
    L(14);
    L(15);
    L(16);
}
void Zall(){
  Functie call;
    call.Z(2).    Z(3).    Z(4).    Z(5).    Z(6).    Z(7).    Z(8).    Z(9).    Z(10);
}
void X1(){
  Functie call;
    call.Z(2).    Z(3).    Z(4);
}
void X2(){
  Functie call;
    call.Z(4).    Z(5).    Z(6);
}
void X3(){
  Functie call;
    call.Z(8).    Z(9).    Z(10);
}
void Y1(){
  Functie call;
    call.Z(2).    Z(5).    Z(8);
}
void Y2(){
  Functie call;
    call.Z(3).    Z(6).    Z(9);
}
void Y3(){
  Functie call;
   call. Z(4).    Z(7).    Z(10);
}
void loop(){   // BEGIN VOID LOOP

    Functie call;
    
    for (int i = 0; i < 16; i++){
    L(14);
    Y1();
    delay(t200);
    L(14);
    Y1();
    L(15);
    Y2();
    delay(t200);
    L(15);
    Y2();
    L(16);
    Y3();
    delay(t200);
    L(16);
    Y3;
}
    for (int i = 0; i < 16; i++){
    L(15);
    Y1();
    Y2();
    Y3();
    delay(t200);
    L(15);
    Y1();
    Y2();
    Y3();
}
    for (int i = 0; i < 16; i++){     
    L(14);
    Y3();
    delay(t200);
    L(14);
    Y3();
    L(15);
    Y2();
    delay(t200);
    L(15);
    Y2();
    L(16);
    Y1();
    delay(t200);
    L(16);
    Y1();
}
    for (int i = 0; i < 16; i++){  
    L(14);
    L(15);
    L(16);
    Y2();
    delay(t200);
    L(14);
    L(15);
    L(16);
    Y2();
}
    for (int i = 0; i < 16; i++){
    L(14);
    Y1();
    delay(t200);
    L(14);
    Y1();
    L(15);
    Y2();
    delay(t200);
    L(15);
    Y2();
    L(16);
    Y3();
    delay(t200);
    L(16);
    Y3;
}
    for (int i = 0; i < 16; i++){
    L(15);
    Y1();
    Y2();
    Y3();
    delay(t200);
    L(15);
    Y1();
    Y2();
    Y3();
}
    for (int i = 0; i < 16; i++){     
    L(14);
    Y3();
    delay(t200);
    L(14);
    Y3();
    L(15);
    Y2();
    delay(t200);
    L(15);
    Y2();
    L(16);
    Y1();
    delay(t200);
    L(16);
    Y1();
}
    for (int i = 0; i < 16; i++){   
    L(14);
    L(15);
    L(16);
    Y2();
    delay(t200);
    L(14);
    L(15);
    L(16);
    Y2();
}  
for (int i = 0; i < 16; i++){  
    L(14);
    call.Z(2).Z(4).Z(8).Z(10);
    delay(t200);
    call.Z(2).    Z(4).    Z(8).    Z(10).    Z(3).    Z(5).    Z(7).    Z(9);
    delay(t200);
    call.Z(3).Z(5).    Z(7).    Z(9);
    L(14);
}

    for (int i = 0; i < 16; i++){
    L(15);
    call.Z(2).    Z(4).    Z(8).    Z(10);
    delay(t200);
    call.Z(2).    Z(4).    Z(8).    Z(10).    Z(3).    Z(5).    Z(7).    Z(9);
    delay(t200);
    call.Z(3).    Z(5).    Z(7).    Z(9);
    L(15);
}
    for (int i = 0; i < 16; i++){
    L(16);
    call.Z(2).    Z(4).    Z(8).    Z(10);
    delay(t200);
    call.Z(2).    Z(4).    Z(8).   Z(10).    Z(3).    Z(5).    Z(7).    Z(9);
    delay(t200);
    call.Z(3).   Z(5).   Z(7).    Z(9);
    L(16);
}
    for (int i = 0; i < 16; i++){
    L(16);
    Y1();
    delay(t200);
    Y1();
    Y2();
    delay(t200);
    Y2();
    Y3();
    delay(t200);
    L(16);
    L(15);
    delay(t200);
    Y3();
    Y2();
    delay(t200);
    Y2();
    Y1();
    delay(t200);
    L(15);
    L(14);
    delay(t200);
    Y1();
    Y2();
    delay(t200);
    Y2();
    Y3();
    delay(t200);
    Y3();
    L(14);
}
    for (int i = 0; i < 4; i++){
    L(14);
    call.Z(2);
    delay(t200);
    call.Z(2).    Z(3);
    delay(t200);
    call.Z(3).    Z(4);
    delay(t200);
    call.Z(4).    Z(7);
    delay(t200);
    call. Z(7).    Z(6);
    delay(t200);
    call. Z(6).    Z(5);
    delay(t200);
    call. Z(5).    Z(8);
    delay(t200);
    call. Z(9).    Z(10);
    delay(t200);
    L(14);
    L(15);
    delay(t200);
    call.Z(10).    Z(9);
    delay(t200);
    call.Z(9).    Z(8);
    delay(t200);
    call.Z(8).    Z(5);
    delay(t200);
    call.Z(5).    Z(6);
    delay(t200);
    call.Z(6).    Z(7);
    delay(t200);
    call.Z(7).    Z(4);
    delay(t200);
    call.Z(4).    Z(3);
    delay(t200);
    call.Z(3).    Z(2);
    delay(t200);
    L(15);
    L(16);
    delay(t200);
    call.Z(2).    Z(3);
    delay(t200);
    call.Z(3).    Z(4);
    delay(t200);
    call.Z(4).    Z(7);
    delay(t200);
    call.Z(7).    Z(6);
    delay(t200);
    call.Z(6).    Z(5);
    delay(t200);
    call.Z(5).    Z(8);
    delay(t200);
    call.Z(9).    Z(10);
    delay(t200);
    L(16);
    call.Z(10);
}
    L(14);
    call.Z(2);
    delay(t200);
    call.Z(3);
    delay(t200);
    call.Z(4);
    delay(t200);
    call.Z(2).Z(7);
    delay(t200);
    call.Z(3).    Z(6);
    delay(t200);
    call.Z(4).    Z(5);
    delay(t200);
    call.Z(7).    Z(8);
    delay(t200);
    call.Z(6).    Z(9);
    delay(t200);
    call.Z(5).    Z(10);
    delay(t200);
    call.Z(8).    Z(9);
    L(15);
    delay(t200);
    L(14);
    call.Z(8);
    delay(t200);
    call.Z(10).    Z(5);
    delay(t200);
    call.Z(9).    Z(2);
    delay(t200);
    call.Z(8).    Z(3);
    delay(t200);
    call.Z(5).    Z(4);
    delay(t200);
    L(14);
    L(16);
    delay(t200);
    Lall();
    delay(t200);
    Lall();
    delay(t200);
    Lall();
    delay(t200);
    Lall();
    delay(t200);
    X1();
    X2();
    delay(t200);
    X2();
    X3();
    delay(t200);
    X3();
    X2();
    delay(t200);
    X2();
    X1();
    delay(t200);
    call.Z(4).    Z(5);
    delay(t200);
    call.Z(3).    Z(8);
    delay(t200);
    Y1();
    Y2();
    delay(t200);
    Y2();
    Y3();
    delay(t200);
    Y3();
    Y2();
    delay(t200);
    Y2();
    Y1();
    delay(t200);
    L(16);
    delay(t200);
    L(15);
    delay(t200);
    L(14);
    Y1();

    for (int i = 0; i < 8; i++){
        L(14);
        Zall;
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        L(16);
}

   for (int i = 0; i < 4; i++){
        L(14);
        Zall();
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        L(16); 
}
    
        L(14);
        Y1();
        delay(t200);
        Y1();
        Y2();
        delay(t200);
        Y2();
        Y3();
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        Y3();
        Y2();
        delay(t200);
        Y2();
        Y1();
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        Y1();
        Y2();
        delay(t200);
        Y2();
        Y3();
        delay(t200);
        Y3();
        L(16);

    for (int i = 0; i < 10; i++){
        L(14);
        X3();
        delay(t200);
        L(14);
        L(15);
        X3();
        X2();
        delay(t200);
        L(15);
        L(16);
        X2();
        X1();
        delay(t200);
        L(16);
        X1();
}
   for (int i = 0; i < 10; i++){
        X2();
        L(14);
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        X2();
        L(16);
}
    for (int i = 0; i < 10; i++){
    
        L(14);
        X1();
        delay(t200);
        L(14);
        X1();
        L(15);
        X2();
        delay(t200);
        L(15);
        X2();
        L(16);
        X3();
        delay(t200);
        L(16);
        X3();
}
        L(15);
        Y1();
        Y2();
        Y3();
        delay(300);
        L(15);
        Y1();
        Y2();
        Y3();

        
    for (int i = 0; i < 20; i++){
        L(14);
        call.Z(3).        Z(5).       Z(7).        Z(9);
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        L(16);
}
    for (int i = 0; i < 20; i++){
        L(14);
        call.Z(2).        Z(4).        Z(8).        Z(10);
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        L(16);
}
    for (int i = 0; i < 20; i++){
        L(14);
        call.Z(3).        Z(5).        Z(7).        Z(9);
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        L(16);
}
    for (int i = 0; i < 20; i++){
        L(14);
        call.Z(2).        Z(4).        Z(8).        Z(10);
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        L(16);
}
    for (int i = 0; i < 20; i++){
        L(14);
        call.Z(3).        Z(5).        Z(7).        Z(9);
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        L(16);
}
    for (int i = 0; i < 20; i++){
        L(14);
        call.Z(2).     Z(4).        Z(8).        Z(10);
        delay(t200);
        L(14);
        L(15);
        delay(t200);
        L(15);
        L(16);
        delay(t200);
        L(16);
}
    }
