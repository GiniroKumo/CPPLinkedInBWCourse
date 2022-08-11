#include <cstdio>

template <typename T>
T factorial(T number) {
	if (number <= 1) {
		return{ 0 };
	}
	T total{ 0 };
	T final_loop{ 1 };
	for (T i = number; i != final_loop; i--) {
		if (total == 0) {
			total = (i * (i - 1));
		}
		else (total *= (i - 1));
	}

	return(total);
}

int main() {

	const unsigned long int number{ 7 };
	printf("The factorial of %lu is: ", number);
	const unsigned long int factorial_number = factorial(number);
	printf("%lu", factorial_number);


	return{ 0 };
}