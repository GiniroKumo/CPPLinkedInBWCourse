#include <cstdio>

unsigned long int factorial(const unsigned long int number) {
	if (number <= 1) {
		return{ 0 };
	}
	unsigned long int total{ 0 };
	unsigned long int final_loop{ 2 };
	for (unsigned long int i = number; i == final_loop; i--) {
		total += (i * (i - (unsigned long int)1));
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