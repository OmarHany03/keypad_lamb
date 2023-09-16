#include <Key.h>
#include <Keypad.h>

const byte rows=4;
const byte cols=4;
char keys[rows] [cols]={
  
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[rows]={13,12,11,10};
byte colPins[cols]={9,8,7,6};
Keypad FKeypad = Keypad (makeKeymap (keys) , rowPins,
colPins,rows,cols);
void setup(){
Serial.begin(9600);
pinMode(5,OUTPUT);
}
void loop (){
  char B_Key = FKeypad.getKey();
  if (B_Key=='1'){
    digitalWrite(5,HIGH);
  }
  else if (B_Key=='0'){
    Serial.println(B_Key);
    digitalWrite(5,LOW);
  }
    

  }/*else{
    //Serial.println(B_Key);
    end;
  }*/
