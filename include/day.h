#ifndef DAY_H_
#define DAY_H_

#include "types.h"
#include <functional>

namespace day {
	class Day {
	private:
		day_t today;
		day_t what_day_will_it_be(unsigned int n); // It returns what day it will be in n days

		typedef day_t (Day::*function_t)(unsigned int);
		function_t array[1] = {&Day::what_day_will_it_be};
	public:
		Day(day_t today);
		virtual ~Day();
		void do_things();
	};
} /* namespace day */

#endif /* DAY_H_ */
