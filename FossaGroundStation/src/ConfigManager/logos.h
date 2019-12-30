/*
  logos.h - Images to show on the config webpage
  
  Copyright (C) 2020 @G4lile0, @gmag12 and @dev_4m1g0

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
*/

#include <Arduino.h>

const char LOGO[] PROGMEM = "<div><img src='data:image/png;base64,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'/></div>\n";