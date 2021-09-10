#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <ctype.h>
#include "divisor_sum.h"

int main(int argc, char** argv) {
	

	if (argc == 2) {
		unsigned long param = strtoul(argv[1], NULL, 10);
		if (param == 0 && !isdigit(param)) {
			errx(1, "Error");
		}
		printf("divisor_sum(%lu) = %lu\n", param, divisor_sum(param));
		return 0;
	}
	else {
		errx(1, "Error");
	}
	errx(1, "Error");
}
