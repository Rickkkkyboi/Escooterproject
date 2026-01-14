
// Light Definitions //
const int Light1 = 8;
const int Light2 = 9;
const int Light3 = 10;
const int Light4 = 11;
const int Light5 = 12;






void LEDMATRIXsetup(){
pinMode(Light1, OUTPUT); //L1 LEDMATRIX
pinMode(Light2, OUTPUT); //L2 LEDMATRIX
pinMode(Light3, OUTPUT); //L3 LEDMATRIX
pinMode(Light4, OUTPUT); //L4 LEDMATRIX
pinMode(Light5, OUTPUT); //L5 LEDMATRIX
}

void LEDSETMATRIX(int L1,int L2,int L3,int L4,int L5){
  if (L1 > 1){L1 = 1;} if (L2 > 1){L2 = 1;} if (L3 > 1){L3 = 1;} if (L4 > 1){L4 = 1;} if (L5 > 1){L5 = 1;}

  if(L1 == 0){digitalWrite(Light1, LOW);}
  if(L2 == 0){digitalWrite(Light2, LOW);}
  if(L3 == 0){digitalWrite(Light3, LOW);}
  if(L4 == 0){digitalWrite(Light4, LOW);}
  if(L5 == 0){digitalWrite(Light5, LOW);}

  if(L1 == 1){digitalWrite(Light1, HIGH);}
  if(L2 == 1){digitalWrite(Light2, HIGH);}
  if(L3 == 1){digitalWrite(Light3, HIGH);}
  if(L4 == 1){digitalWrite(Light4, HIGH);}
  if(L5 == 1){digitalWrite(Light5, HIGH);}
}

void LEDFLASHMATRIX(int TimesToRepeat, int DelayBetweenFlash){
  int TimesRepeated;
  while (TimesRepeated < TimesToRepeat){
    LEDSETMATRIX(1,1,1,1,1);
    delay(DelayBetweenFlash);
    LEDSETMATRIX(0,0,0,0,0);
    delay(DelayBetweenFlash);
    TimesRepeated++;
  }
  Serial.print("Flashed Matrix by TimesToRepeat between DelayBetweenFlash ms.");
}



