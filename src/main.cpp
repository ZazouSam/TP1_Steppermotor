#include <mbed.h>
//DigitalOut  p25,p26,p27,p28,p29,p30
DigitalOut  MS3(p25),MS2(p26),MS1(p27),EN(p28),DIR(p29),STEP(p30);


int main() {

  // put your setup code here, to run once:
  //set value of MS3,MS2,MS1 to 0
  MS3=0;
  MS2=0;
  MS1=0;
  //set value of EN to 0
  EN=0;
  

  while(1) {
    // put your main code here, to run repeatedly:
  }
}