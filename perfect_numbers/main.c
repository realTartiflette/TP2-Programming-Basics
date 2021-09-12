#include <stdio.h>
#include  "is_perfect_number.h"

int main() {

	for (int i = 0; i <= 100000; i++) {
		
		if (is_perfect_number(i)) {
			
			printf("%d\n",i);
		}
	}

	return 0;
}
