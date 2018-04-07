extern "C" {
  #include <stdlib.h>
  #include <string.h>
  #include <inttypes.h>
}
#include <Arduino.h>
#include "interval.h"

// Public Methods //////////////////////////////////////////////////////////////
uint32_t Interval::remains(void)
{

	return _timeout - (millis() - _timefrom);
}

uint32_t Interval::elapsed(void)
{

	return millis() - _timefrom;
}

bool Interval::expired(void)
{

	if ((millis() - _timefrom) >= _timeout)
		return true;
	else
		return false;
}

void Interval::set(uint32_t tmout)
{

  _reload = tmout;
	_timefrom = millis();
	_timeout = _reload;
}

void Interval::reload(void)
{

  _timefrom = millis();
  _timeout = _reload;
}
