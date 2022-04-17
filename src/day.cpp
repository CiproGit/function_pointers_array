#include "day.h"
#include <iostream>

using namespace std;

namespace day {
	Day::Day(chrono::system_clock::time_point time_point) {
		this->time = chrono::system_clock::to_time_t(time_point);

		struct tm *timeinfo = localtime(&(this->time));

		this->today = (day_t) timeinfo->tm_wday;
	}

	Day::~Day() {}

	void Day::print_date() const {
		cout << "Full date: " << ctime(&(this->time)) << endl;
	}

	day_t Day::what_day_will_it_be(unsigned int n) {
		unsigned int future_day = this->today + n;
		if (future_day >= MAX_NUM_DAYS) future_day = future_day % MAX_NUM_DAYS;

		return (day_t) future_day;
	}

	void Day::the_day_after_tomorrow() {
		function_t function = this->array[0];
		day_t day_x = (this->*function)(2); // Return what day it will be in 2 days

		cout << "The day after tomorrow is:\n";

		switch(day_x) {
			case SUNDAY:
				cout << "Sunday" << endl;
				break;
			case MONDAY:
				cout << "Monday" << endl;
				break;
			case TUESDAY:
				cout << "Tuesday" << endl;
				break;
			case WEDNESDAY:
				cout << "Wednesday" << endl;
				break;
			case THURSDAY:
				cout << "Thursday" << endl;
				break;
			case FRIDAY:
				cout << "Friday" << endl;
				break;
			case SATURDAY:
				cout << "Saturday" << endl;
				break;
			default:
				cerr << "Error" << endl;
				break;
		}
	}
} // namespace day
