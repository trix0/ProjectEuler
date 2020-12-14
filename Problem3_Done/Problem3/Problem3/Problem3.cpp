//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?

#include <iostream>

void FindPrimeFactor(int64_t input);

int main()
{
	int64_t  FindPrimeFactorsFor = 600851475143;
	FindPrimeFactor(FindPrimeFactorsFor);
}

void FindPrimeFactor(int64_t input) {



	while (input%2==0)
	{
		printf("Divided by 2 %d\n", input / 2);
		input = input / 2;
	}
	
	for (int i = 3; i <= sqrt(input); i += 2) {

		while (input % i == 0) {
			printf("%d\n", i);
			input /= i;
		}
	}

	if (input > 2) {
		printf("%d\n",input);
	}

}
