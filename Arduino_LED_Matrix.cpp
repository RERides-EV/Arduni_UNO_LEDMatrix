
/*  Arduino from Arduino
    Copyright (C) 2025 David Durazzo
    for RERides EV

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

This code is in the Public Domain
*/

#include <Arduino_LED_Matrix.h>

ArduinoLEDMatrix matrix;

const uint32_t happy[] = {
    0x19819,
    0x80000001,
    0x81f8000
};
const uint32_t heart[] = {
    0x3184a444,
    0x44042081,
    0x100a0040
};
const uint32_t on[] = {
		0xffffffff,
		0xffffffff,
		0xffffffff
};
const uint32_t off[] = {
		0x0,
		0x800400,
		0x0
};
  
void flash(){
  for (int i = 0; i < 7; i++){
    matrix.loadFrame(on);
    delay(250);

    matrix.loadFrame(off);
    delay(250);
  }
}

void setup() {
  Serial.begin(115200);
  matrix.begin();
}

void loop(){
//  matrix.loadFrame(on);
//  delay(3000);

//  matrix.loadFrame(off);
//  delay(1500);

  flash();

  delay(1500);
}
