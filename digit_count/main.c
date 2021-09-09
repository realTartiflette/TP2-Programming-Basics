#include <stdio.h>
#include "digit_count.h"

int main() {
	
	printf("digit_count(%d) = %u\n", 0, digit_count(0));

	unsigned long pow = 1;
	for (int i = 1; i <= 64 ; i++) {

		printf("digit_count(%lu) = %u\n", pow, digit_count(pow));
		pow*=2;
	}

	return 0;
}
