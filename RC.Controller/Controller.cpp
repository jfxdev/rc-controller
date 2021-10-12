#include "Controller.h"

Controller::Controller(byte LVRX_Pin, byte LSW_Pin, byte RVRY_Pin, byte RSW_Pin, byte A_Pin, byte B_Pin){
  _LVRX_Pin = LVRX_Pin;
  _LSW_Pin = LSW_Pin;
  _RVRY_Pin = RVRY_Pin;
  _RSW_Pin = RSW_Pin;
  _A_Pin = A_Pin;
  _B_Pin = B_Pin;
}

void Controller::setup(){
    pinMode(_LVRX_Pin, INPUT);
    pinMode(_LSW_Pin, INPUT_PULLUP);
    pinMode(_RVRY_Pin, INPUT);
    pinMode(_RSW_Pin, INPUT_PULLUP);
}

void Controller::Read(Command *command){
  command->L_X = analogRead(_LVRX_Pin);
  command->L_SW = digitalRead(_LSW_Pin);
  command->R_Y = analogRead(_RVRY_Pin);
  command->R_SW = digitalRead(_RSW_Pin);
}
