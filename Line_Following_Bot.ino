#define m1n 2//p1_0
#define m1p 3//p2_1
#define m2p 5//p1_3
#define m2n 6//p1_4 
int i,a[6];
void setup()
{
  // put your setup code here, to run once:
  pinMode(m1p,OUTPUT);
  pinMode(m1n,OUTPUT);
  pinMode(m2p,OUTPUT);
  pinMode(m2n,OUTPUT);
  for(i=7;i<13;i++)
  pinMode(i,INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly: 
  for(i=7;i<13;i++)
    a[i-7]=digitalRead(i);
    
    if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==1)//simple right
    {right();
      /*do{
      right();}
      while(!a[2]==1 && !a[3]==1 && !(a[1]==1 || a[4]==1) && !a[0]==0 && !a[5]==0); */
         if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==0) 
         {right();delay(100);}
    }
    if(a[0]==1 && a[1]==0 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==1)//left contrast
    left();
   // if(a[0]==1 && a[1]==1 && a[2]==0 && a[3]==1 && a[4]==1 && a[5]==1)//possible t
    //right();
    //if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==0 && a[4]==1 && a[5]==1)
    //right();
    if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==0 && a[5]==1)//contrast right
    right();
    if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==0)//simple junction
    {
      left();
      /*do{
      left();}
      while(!a[2]==1 && !a[3]==1 && !(a[1]==1 || a[4]==1) && !a[0]==0 && !a[5]==0);*/
       if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==1)
       {left();delay(100);}
    }
    if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==1)//T junction right all black
    {//right();
      if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==0)
      {right();delay(100);}
      else
       if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==1)
      {left();delay(100);}
      
      
    } 
    /////////////////////////////////////////////////
    if(a[0]==0 && a[1]==0 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==1)//another simple ryt
    right();
    if(a[0]==0 && a[1]==1 && a[2]==0 && a[3]==1 && a[4]==1 && a[5]==1)//
    left();
    //if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==0 && a[4]==1 && a[5]==1)
    //right();
    //if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==0 && a[5]==1)
    //right();
    if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==0)
    forward();
    //////////////////////////////////////////////////
    if(a[0]==1 && a[1]==0 && a[2]==0 && a[3]==1 && a[4]==1 && a[5]==1)//possible trans from black to white line
    forward();
    if(a[0]==1 && a[1]==0 && a[2]==1 && a[3]==0 && a[4]==1 && a[5]==1)//possible trans from white to black line
    forward();
    //if(a[0]==1 && a[1]==0 && a[2]==1 && a[3]==1 && a[4]==0 && a[5]==1)
    //right();
    if(a[0]==1 && a[1]==0 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==0)//to continue left while turn
    left();
    //////////////////////////////////////////////////
    if(a[0]==1 && a[1]==1 && a[2]==0 && a[3]==0 && a[4]==1 && a[5]==1)
    forward();
    if(a[0]==1 && a[1]==1 && a[2]==0 && a[3]==1 && a[4]==0 && a[5]==1)
    forward();
    if(a[0]==1 && a[1]==1 && a[2]==0 && a[3]==1 && a[4]==1 && a[5]==0)
    left();//changed
    ///////////////////////////////////////////////////
    if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==0 && a[4]==0 && a[5]==1)
    forward();
    //if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==0 && a[4]==1 && a[5]==0)
    //right();
    ///////////////////////////////////////////////////
    if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==0 && a[5]==0)//simple left
    left();
    ///////////////////////////////////////////////////
    if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==1 && a[4]==1 && a[5]==1)//curve
    right();
    if(a[0]==0 && a[1]==0 && a[2]==1 && a[3]==0 && a[4]==1 && a[5]==1)//transition fron w to b
    forward();
    if(a[0]==0 && a[1]==0 && a[2]==1 && a[3]==1 && a[4]==0 && a[5]==1)//tri end
    right();
    if(a[0]==0 && a[1]==0 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==0)//simple forward
    forward();
    ///////////////////////////////////////////////////
    //if(a[0]==0 && a[1]==1 && a[2]==0 && a[3]==0 && a[4]==1 && a[5]==1)
    //right();
    //if(a[0]==0 && a[1]==1 && a[2]==0 && a[3]==1 && a[4]==0 && a[5]==1)
    //right();
    if(a[0]==0 && a[1]==1 && a[2]==0 && a[3]==1 && a[4]==1 && a[5]==0)//tri jnc
    right();
    //////////////////////////////////////////////////
    if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==0 && a[4]==0 && a[5]==1)//possible trans
    forward();
    //if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==0 && a[4]==1 && a[5]==0)
    //forward();
    /////////////////////////////////////////////////
    if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==0 && a[5]==0)//simple forward
    forward();
    ////////////////////////////////////////////////
    if(a[0]==1 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==1 && a[5]==1)//simple forward-contrast
    forward();
    //if(a[0]==1 && a[1]==0 && a[2]==0 && a[3]==1 && a[4]==0 && a[5]==1)//simple forward
    //forward();
    //if(a[0]==1 && a[1]==0 && a[2]==0 && a[3]==1 && a[4]==1 && a[5]==0)//simple forward
    //forward();
    ///////////////////////////////////////////////
    //if(a[0]==1 && a[1]==0 && a[2]==1 && a[3]==0 && a[4]==0 && a[5]==1)//simple forward
    //forward();
    //if(a[0]==1 && a[1]==0 && a[2]==1 && a[3]==0 && a[4]==1 && a[5]==0)//simple forward
    //forward();
    //////////////////////////////////////////////
    if(a[0]==1 && a[1]==0 && a[2]==1 && a[3]==1 && a[4]==0 && a[5]==0)//rect-end
    left();
    /////////////////////////////////////////////
    if(a[0]==1 && a[1]==1 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==1)//simple forward-contrast
    forward();
    //if(a[0]==1 && a[1]==1 && a[2]==0 && a[3]==0 && a[4]==1 && a[5]==0)//simple forward
    //forward();
    ////////////////////////////////////////////
    if(a[0]==1 && a[1]==1 && a[2]==0 && a[3]==1 && a[4]==0 && a[5]==0)//maybe left
    left();
    ///////////////////////////////////////////
    if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==0 && a[4]==0 && a[5]==0)//
    left();
    ////////////////////////////////(4zeros)
    if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==1 && a[5]==1)//
    right();

    if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==1 && a[4]==0 && a[5]==1)//just in case it goes out of track 
    right();
    if(a[0]==0 && a[1]==0 && a[2]==1 && a[3]==0 && a[4]==0 && a[5]==1)//contrast left
    left();

    if(a[0]==0 && a[1]==1 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==1)
    left();
    if(a[0]==1 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==1)//contrast
    forward();

    /////////////////////////////////
    if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==1 && a[4]==1 && a[5]==0)//while taking simple right
    right();

    if(a[0]==0 && a[1]==0 && a[2]==1 && a[3]==0 && a[4]==1 && a[5]==0)//curve
    right();

    if(a[0]==0 && a[1]==1 && a[2]==0 && a[3]==0 && a[4]==1 && a[5]==0)
    forward();

    if(a[0]==1 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==1 && a[5]==0)
    right();
    ////////////////////////////////

    if(a[0]==0 && a[1]==0 && a[2]==1 && a[3]==1 && a[4]==0 && a[5]==0)//if thin line
    forward();

    if(a[0]==0 && a[1]==1 && a[2]==0 && a[3]==1 && a[4]==0 && a[5]==0)//while taking simple left
    left();

    if(a[0]==1 && a[1]==0 && a[2]==0 && a[3]==1 && a[4]==0 && a[5]==0)//usually not possible ,just in case
    left();

    //////////////////////////////////
    if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==0 && a[4]==0 && a[5]==0)
    forward();
    if(a[0]==1 && a[1]==0 && a[2]==1 && a[3]==0 && a[4]==0 && a[5]==0)//contrast right
    right();

    ///////////////////////////////
    if(a[0]==1 && a[1]==1 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==0)
    left();

    //////////////////////////////////////////
    if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==1)//contrast left
    left();
    //if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==1 && a[5]==0)//simple forward
    //forward();
    if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==1 && a[4]==0 && a[5]==0)//transition
    forward();
    if(a[0]==0 && a[1]==0 && a[2]==1 && a[3]==0 && a[4]==0 && a[5]==0)//transition
    forward();
    //if(a[0]==0 && a[1]==1 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==0)//simple forward
    //forward();
    if(a[0]==1 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==0)//contrast right
    right();
    ////////////////////////////////////////
    if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==0)//allwhite
    reverse();
    
    
     
}


void reverse()
{
  digitalWrite(m1p,HIGH);
  digitalWrite(m2p,HIGH);
  
  digitalWrite(m1n,LOW);
  digitalWrite(m2n,LOW);
  analogWrite(P1_6,105);//fn used to contol the speed of the motor i.e 200 rpm here (default is 300 rpm)
  delay(800);
  
}
void forward()
{
  digitalWrite(m1n,HIGH);
  digitalWrite(m2n,HIGH);
   
  digitalWrite(m1p,LOW);
  digitalWrite(m2p,LOW);
  analogWrite(P1_6,105);
  //delay(1000);
}

void right()
{
  digitalWrite(m1p,LOW);
  digitalWrite(m2n,LOW);
   
  digitalWrite(m1n,HIGH);
  digitalWrite(m2p,HIGH);
  analogWrite(P1_6,150);
  //delay(1000);
}
void left()
{
  digitalWrite(m1p,HIGH);
  digitalWrite(m2p,LOW);
  
  digitalWrite(m1n,LOW);
  digitalWrite(m2n,HIGH);
  analogWrite(P1_6,150);
  //delay(1000);
  
}
void halt()
{
  digitalWrite(m1p,LOW);
  digitalWrite(m2p,LOW);
  
  digitalWrite(m1n,LOW);
  digitalWrite(m2n,LOW);
  
  delay(1000);
}
