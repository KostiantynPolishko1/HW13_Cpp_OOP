#include "Watch.h"

short Watch::getTimeHours() {
	return _timeHours;
}
;
short Watch::getTimeMinutes() {
	return _timeMinutes;
}
;
void Watch::setTimeHours(short timeHours) {
	_timeHours = timeHours;
}
;
void Watch::setTimeMinutes(short timeMinutes) {
	_timeMinutes = timeMinutes;
}
;
char* Watch::getTime()
{
	short _timeHours = getTimeHours();
	short _timeMinutes = getTimeMinutes();

	static_cast<char>(48 + _timeHours / 10) + static_cast<char>(48 + _timeHours % 10) + '+' +
		static_cast<char>(48 + _timeMinutes / 10) + static_cast<char>(48 + _timeMinutes % 10);
	return _time;
}
