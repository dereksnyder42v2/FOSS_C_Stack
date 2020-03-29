#!/bin/bash
set -e

# put stack header into Arduino folder and sed stack.h
cp stack.h ./ArduinoStack
sed -i '/\/\/#include "Arduino.h"/c\#include "Arduino.h"' ./ArduinoStack/stack.h 

# cp stack.c --> Arduino folder as C++ file and sed that too
cp stack.c ./ArduinoStack/stack.cpp
sed -i '/\/\/#include "Arduino.h"/c\#include "Arduino.h"' ./ArduinoStack/stack.cpp
