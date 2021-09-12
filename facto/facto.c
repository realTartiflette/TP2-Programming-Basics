unsigned long facto(unsigned long n) {
	
	unsigned long result = 1;

	for (unsigned long i = 0; (n-i) > 0; i++) {
	
		result *= (n-i); 
	}

	return result;
}

