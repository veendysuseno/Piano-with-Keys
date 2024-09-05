void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);  
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);  
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);  
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
}
void loop(){  
  if(digitalRead(2)==LOW)
    {tone(10,264); //Do
    }
  else if(digitalRead(3)==LOW)
    {tone(10,297);   //Re
    }
  else if(digitalRead(4)==LOW)
    {tone(10,330);  //Mi
    }
  else if(digitalRead(5)==LOW)
    {tone(10,352);  //Fa
    }
  else if(digitalRead(6)==LOW)
    {tone(10,396);  //Sol
    }
  else if(digitalRead(7)==LOW)
    {tone(10,440);  //La
    }
  else if(digitalRead(8)==LOW)
    {tone(10,495);  //Si
    }
  else if(digitalRead(9)==LOW)
    {tone(10,528);  //Do
    }
  else
  {
    noTone(10);
  }
}

