#include "day.h"
#include <iostream>

using namespace std;

int main(void) {
	cout << "*****************************\n";
	cout << "*  FUNCTION POINTERS ARRAY  *\n";
	cout << "*****************************\n" << endl;

	day::Day day(chrono::system_clock::now());

	day.print_date();
	day.the_day_after_tomorrow();

	cout << "End" << endl;
	return EXIT_SUCCESS;
}
