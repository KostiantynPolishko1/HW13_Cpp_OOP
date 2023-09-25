#include "WristWatch.h"

bool WristWatch::getWaterProof() {
	if (_deepWater)
		return true;
	return false;
}
;
short WristWatch::getDeepWater() {
	return _deepWater;
}
;
void WristWatch::setDeeWater(short deepWater) {
	_deepWater = deepWater;
}
;