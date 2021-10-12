#include "Controller.h"

const int VRX = A5;
const int SW = 7;
const int RVRY = A4;
const int RSW = 6;

Controller controller(VRX, SW, RVRY, RSW, 0, 0);
Command command;

void setup(){
  Serial.begin(9600);
  controller.setup();
}

void loop(){
  controller.Read(&command);
  char buffer[50];
  sprintf(buffer, "VRX %d, SW %s", command.R_Y, command.R_SW ? "HIGH" : "LOW");
  Serial.println(buffer);
}
