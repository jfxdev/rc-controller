#ifndef Controller_h
#define Controller_h

#include "Arduino.h"

struct Command {
  int  L_X;
  bool L_SW;
  int  R_Y;
  bool R_SW;
  bool A_Button;
  bool B_Button;
}; 

class Controller
{
  public:
    Controller(byte LVRX_Pin, byte LSW_Pin, byte RVRY_Pin, byte RSW_Pin, byte A_Pin, byte B_Pin);
    void setup();
    void Read(Command *cmd);
  private:
    Command _command;
    byte _LVRX_Pin;
    byte _LSW_Pin;
    byte _RVRY_Pin;
    byte _RSW_Pin;
    byte _A_Pin;
    byte _B_Pin;
};

#endif
