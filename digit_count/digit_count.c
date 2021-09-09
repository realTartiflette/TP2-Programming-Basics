#include <stdio.h>

unsigned char digit_count(unsigned long n) {

	unsigned long i = 9;
	unsigned char res = 1;

	while (i < n) {
		i = i * 10 + 9;
		res++;
	}

	return res;
}
