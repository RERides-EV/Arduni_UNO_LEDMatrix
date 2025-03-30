
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

void setup() {
  Serial.begin(115200);
  matrix.begin();
}

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
const uint32_t bright[] = {
		0xffffffff,
		0xffffffff,
		0xffffffff,
		66
};
const uint32_t dark[] = {
		0x0,
		0x800400,
		0x0,
		66
};
  
void loop(){
  matrix.loadFrame(bright);
  delay(3000);

  matrix.loadFrame(dark);
  delay(1500);

  void flash()}
    matrix.loadFrame(bright);
    delay(50);

    matrix.loadFrame(dark);
    delay(50);
  }

  delay(1500);
}
