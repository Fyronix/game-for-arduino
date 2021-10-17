
#ifndef JOYSTICK2_h
#define JOYSTICK2_h

#include "HID.h"

#if ARDUINO < 10606
#error The Joystick library requires Arduino IDE 1.6.6 or greater. Please update your IDE.
#endif

#if ARDUINO > 10606
#if !defined(USBCON)
#error The Joystick library can only be used with a USB MCU (e.g. Arduino Leonardo, Arduino Micro, etc.).
#endif
#endif

#if !defined(_USING_HID)

#warning "Using legacy HID core (non pluggable)"

#else

//================================================================================
//================================================================================
//  Joystick (Gamepad)

class Joystick_
{
public:
	Joystick_();
	
	int8_t	 xAxis;
  int8_t  yAxis;
	uint32_t buttons;

	void begin();
	void end();

	void sendState();
};
extern Joystick_ Joystick;

#endif
#endif
