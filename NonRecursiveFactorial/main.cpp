#include <cstdio>

unsigned long int factorial(const unsigned long int number) {
	if (number <= 1) {
		return{ 0 };
	}
	unsigned long int total{ 0 };
	const unsigned long int final_loop{ 2 };
	for (unsigned long int i = number; i != 1; i--) {
		if (total == 0) {
			total = (i * (i - 1));
		}
		else (total *= (i-1));
	}

	return(total);
}

int main() {

	const unsigned long int number{ 5 };
	printf("The factorial of %lu is: ", number);
	const unsigned long int factorial_number = factorial(number); 
	printf("%lu", factorial_number);


	return{ 0 };
}