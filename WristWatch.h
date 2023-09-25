#pragma once
#include "Watch.h"

#ifndef WRISTWATCH_H
#define WRISTWATCH_H

class WristWatch : public Watch
{
private:
	bool _waterProof;
	short _deepWater;

	using Watch::setTimeHours;
	using Watch::getTimeHours;

public:
	WristWatch() : Watch()
	{
		_waterProof = false;
		_deepWater = 0;
	}

	WristWatch(short deepWater, short timeHours, short timeMinutes, char* produced) : 
		Watch(timeHours, timeMinutes, produced)
	{
		_deepWater = deepWater;
		_waterProof = getWaterProof();
	}

	bool getWaterProof();
	short getDeepWater();
	void setDeeWater(short deepWater);
}
;
#endif