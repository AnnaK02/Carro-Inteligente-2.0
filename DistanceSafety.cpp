#include <stdbool.h>
#include <iostream>
#include <string>
#include <sstream>
#include <Arduino.h>
using namespace std;

#include "Move.cpp"

class DistanceSafety: public Move {
  int Trigger, Echo, tempo, distancia;
  bool riskCollide = false;

  public:

  void ultrasonicPins(int Trig, int Ech){
    this->Trigger = Trig;
    this->Echo = Ech;
  }

  bool calcDistanceSafety(){
    digitalWrite(Trigger, LOW);
    delayMicroseconds(2);
    digitalWrite(Trigger, HIGH);
    delayMicroseconds(10);
    
    this->tempo = pulseIn(Echo, HIGH);

    this->distancia = (tempo/2.0)/29.1;

    cout << "Tempo = " << tempo << "\n" << flush;
    cout << "Distancia = " << distancia << "\n" << flush;
    
    if(distancia<=25){
      this->riskCollide = true;
    } else{
      this->riskCollide = false;
    }

    cout << "Risk = " << riskCollide << "\n" << flush;
    return this->riskCollide;
  }

  void Warning(){
    cout << "\nWARNING: RISK OF COLLISION.\n" << flush;
    cout << "Automatic car stop safety measure.\n" << flush;
    cout << "Please input workaround route to unstuck car.\n" << flush;
  }
};
