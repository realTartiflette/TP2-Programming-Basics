#include <stdio.h>

unsigned long fibo(unsigned long n) {
	
	unsigned long f = 0;
	unsigned long F = 1;
	unsigned long tmp;

	for (unsigned long i = 0; i < n; i++) {
		
		tmp = F;
		F += f;
		f = tmp;	

	}
	
	return f;
       	
}
