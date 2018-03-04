const int buzzerPin = 0;
const int vibrationPin = 1;
const int buzzingFrequency = 100; // the frquency of sound
const int buzzingTime = 100;

unsigned long previousMillis = 0;  
unsigned long previousBuzzingMillis = 0;  

// the time (ms) how log it will wait for vibrations, 
// if no vibration during this time, it would mean that
// the aircraft has landed or crashed
const long interval = 15000;
 
bool testDone = false;

void setup(){    
  pinMode(buzzerPin, OUTPUT);
  pinMode(vibrationPin, INPUT); 
}

void buzzing(){ 
  digitalWrite(buzzerPin, HIGH);
}

void stopBuzzing(){ 
  digitalWrite(buzzerPin, LOW);
}

void loop(){
  if(testDone == false){
    buzzing();
    delay(1000);
    stopBuzzing();
    
    testDone = true;  
  }
  
  unsigned long currentMillis = millis();
  unsigned long currentBuzzingMillis = millis();

  if(digitalRead(vibrationPin) == HIGH){
      previousMillis = currentMillis;
      stopBuzzing();
  }  
      
  if (currentMillis - previousMillis >= interval) {
    if(currentBuzzingMillis - previousBuzzingMillis <= buzzingTime){
      buzzing();
    }else{
      stopBuzzing();

      if(currentBuzzingMillis - previousBuzzingMillis > (buzzingTime*2)){
        previousBuzzingMillis = currentBuzzingMillis;
      }      
    }      
  }else{
    stopBuzzing();
  }  
}
