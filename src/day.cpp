#include "day.h"
#include <iostream>

namespace day {
	Day::Day(day_t today) {
		this->today = today;
	}

	Day::~Day() {}

	day_t Day::what_day_will_it_be(unsigned int n) {
		unsigned int future_day = this->today + n;
		if (future_day >= max_num_days) future_day = future_day % max_num_days;

		return (day_t) future_day;
	}

	void Day::do_things() {
		function_t function = this->array[0];
		day_t day_x = (this->*function)(3); // Return what day it will be in 3 days

		switch(day_x) {
			case monday:
				std::cout << "Monday" << std::endl;
				break;
			case tuesday:
				std::cout << "Tuesday" << std::endl;
				break;
			case wednesday:
				std::cout << "Wednesday" << std::endl;
				break;
			case thursday:
				std::cout << "Thursday" << std::endl;
				break;
			case friday:
				std::cout << "Friday" << std::endl;
				break;
			case saturday:
				std::cout << "Saturday" << std::endl;
				break;
			case sunday:
				std::cout << "Sunday" << std::endl;
				break;
			default:
				break;
		}
	}
} /* namespace day */
