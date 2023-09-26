#pragma once

#ifndef WATCH_H
#define WATCH

class Watch
{
protected:
	short _timeHours;
	short _timeMinutes;
	char* _time;
	char* _produced;

	short getTimeHours();
	short getTimeMinutes();
	

public:
	Watch() : _timeHours{}, _timeMinutes{}, _produced{}
	{
		_time = getTime();
	}

	Watch(short timeHours, short timeMinutes, char* produced) {
		_timeHours = timeHours;
		_timeMinutes = timeMinutes;
		_produced = produced;
		_time = getTime();
	}

	~Watch() {
		_produced = nullptr;
		_time = nullptr;
	}

	char* getTime();

	void setTimeHours(short timeHours);
	void setTimeMinutes(short timeMinutes);
}
;
#endif
