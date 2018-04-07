
#ifndef interval_h
#define interval_h

/* Interval
 * Copyright (C) 2014, 2016, 2018  Pavel Brychta http://www.xpablo.cz
 *
 * This program is free software: you can redistribute it and/or modify it under the terms of the MIT License
 */

#include <inttypes.h>

class Interval
{
  protected:
	uint32_t _timefrom;
	uint32_t _timeout;
  uint32_t _reload;
  public:
	bool expired(void);
	void set(uint32_t tmout);
  void reload(void);
	uint32_t elapsed(void);
	uint32_t remains(void);
};

#endif
// EOF
