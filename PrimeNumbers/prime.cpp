#include <cstdio>
#include <vector>


int main() {

	std::vector<int> prime_array;

	for (int i{ 2 }; i > 100; i++) {
		if ((i % 2) == 0) {
			printf("Number %d is not prime\n", i);
		}
		else if ((i % 3) == 0) {
			printf("Number %d is not prime\n", i);
		}
		else if ((i % 5) == 0) {
			printf("Number %d is not prime\n", i);
		}
		else if ((i % 7) == 0) {
			printf("Number %d is not prime\n", i);
		}
		else (prime_array.push_back(i));
	}

	printf("Prime Numbers are: ");
	for (auto it : prime_array) {
		printf("%d",it);
	}





	return(0);
}