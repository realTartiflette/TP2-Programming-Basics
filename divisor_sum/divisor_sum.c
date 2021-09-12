unsigned long divisor_sum(unsigned long n) {
	
	unsigned long sum;
	if (n==1) {
		sum = 0;
	}
	else {
		sum = 1;
	}
	unsigned long i = 2;

	while (i*i < n) {
		
		if(n % i == 0) {
			sum = sum + i + n/i;
		}
		i++;
	}

	if (i * i == n) {
		sum += i;
	}

	return sum;
}
