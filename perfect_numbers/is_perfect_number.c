#include "is_perfect_number.h"
#include "divisor_sum.h"

int is_perfect_number(unsigned long n) {
	
	int res = 0;
	if (divisor_sum(n) == n) {
		res = 1; 
	}

	return res;
}
