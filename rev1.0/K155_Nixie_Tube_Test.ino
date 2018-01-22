#define A 8
#define B 10
#define C 11
#define D 9

#define A1 4
#define B1 6
#define C1 7
#define D1 5


void setup() {
  Serial.begin(115200);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(D1, OUTPUT);
}

void loop() {
  for(int i=0;i<100;i++){
    dispaly(0, numConvert(i/10));
    dispaly(1, numConvert(i%10));
    delay(200);  
  }
}

uint8_t numConvert(uint8_t num){
  switch(num){
    case 0: return 8;
    case 1: return 2;
    case 2: return 3;
    case 3: return 7;
    case 4: return 6;
    case 5: return 4;
    case 6: return 5;
    case 7: return 1;
    case 8: return 0;
    case 9: return 9;
    default: Serial.println("[ERROR]");
  }
}

void dispaly(uint8_t index, uint8_t num){
  if(index == 0){
    switch(num){
      case 0:
      {
        digitalWrite(A, LOW);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);      
        break;
      }
      case 1:
      {
        digitalWrite(A, HIGH);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);      
        break;
      }
      case 2:
      {
        digitalWrite(A, LOW);
        digitalWrite(B, HIGH);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);      
        break;
      }
      case 3:
      {
        digitalWrite(A, HIGH);
        digitalWrite(B, HIGH);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);      
        break;
      }
      case 4:
      {
        digitalWrite(A, LOW);
        digitalWrite(B, LOW);
        digitalWrite(C, HIGH);
        digitalWrite(D, LOW);      
        break;
      }
      case 5:
      {
        digitalWrite(A, HIGH);
        digitalWrite(B, LOW);
        digitalWrite(C, HIGH);
        digitalWrite(D, LOW);      
        break;
      }
      case 6:
      {
        digitalWrite(A, LOW);
        digitalWrite(B, HIGH);
        digitalWrite(C, HIGH);
        digitalWrite(D, LOW);     
        break; 
      }
      case 7:
      {
        digitalWrite(A, HIGH);
        digitalWrite(B, HIGH);
        digitalWrite(C, HIGH);
        digitalWrite(D, LOW);      
        break;
      }
      case 8:
      {
        digitalWrite(A, LOW);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, HIGH);  
        break;    
      }
      case 9:
      {
        digitalWrite(A, HIGH);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, HIGH);   
        break;   
      }
      default:
      {
        Serial.println("[ERROR]");
      }
    }
  }else if(index == 1)
  {
    switch(num){
      case 0:
      {
        digitalWrite(A1, LOW);
        digitalWrite(B1, LOW);
        digitalWrite(C1, LOW);
        digitalWrite(D1, LOW);      
        break;
      }
      case 1:
      {
        digitalWrite(A1, HIGH);
        digitalWrite(B1, LOW);
        digitalWrite(C1, LOW);
        digitalWrite(D1, LOW);      
        break;
      }
      case 2:
      {
        digitalWrite(A1, LOW);
        digitalWrite(B1, HIGH);
        digitalWrite(C1, LOW);
        digitalWrite(D1, LOW);      
        break;
      }
      case 3:
      {
        digitalWrite(A1, HIGH);
        digitalWrite(B1, HIGH);
        digitalWrite(C1, LOW);
        digitalWrite(D1, LOW);      
        break;
      }
      case 4:
      {
        digitalWrite(A1, LOW);
        digitalWrite(B1, LOW);
        digitalWrite(C1, HIGH);
        digitalWrite(D1, LOW);      
        break;
      }
      case 5:
      {
        digitalWrite(A1, HIGH);
        digitalWrite(B1, LOW);
        digitalWrite(C1, HIGH);
        digitalWrite(D1, LOW);      
        break;
      }
      case 6:
      {
        digitalWrite(A1, LOW);
        digitalWrite(B1, HIGH);
        digitalWrite(C1, HIGH);
        digitalWrite(D1, LOW);     
        break; 
      }
      case 7:
      {
        digitalWrite(A1, HIGH);
        digitalWrite(B1, HIGH);
        digitalWrite(C1, HIGH);
        digitalWrite(D1, LOW);      
        break;
      }
      case 8:
      {
        digitalWrite(A1, LOW);
        digitalWrite(B1, LOW);
        digitalWrite(C1, LOW);
        digitalWrite(D1, HIGH);  
        break;    
      }
      case 9:
      {
        digitalWrite(A1, HIGH);
        digitalWrite(B1, LOW);
        digitalWrite(C1, LOW);
        digitalWrite(D1, HIGH);   
        break;   
      }
      default:
      {
        Serial.println("[ERROR]");
      }
    }
  }
}


