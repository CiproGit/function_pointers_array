#ifndef DAY_H
#define DAY_H

#include "types.h"
#include <ctime>
#include <functional>
#include <chrono>

namespace day {
	class Day {
	private:
        time_t time;
		day_t today;
		day_t what_day_will_it_be(unsigned int n); // It returns what day it will be in n days

		typedef day_t (Day::*function_t)(unsigned int);
		function_t array[1] = {&Day::what_day_will_it_be};
	public:
		Day(std::chrono::system_clock::time_point time_point);
		virtual ~Day();
		void print_date() const;
		void the_day_after_tomorrow();
	};
} // namespace day

#endif // DAY_H
