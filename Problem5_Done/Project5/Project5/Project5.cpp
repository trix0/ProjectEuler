//Smallest multiple
//
//Problem 5 
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

#include <iostream>



//
int main()
{

	printf("Starting Problem 5\n\n");
	int Dividers[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	bool NumberFound = false;
	int currentNumber = 1;		
	while (!NumberFound) {

		//printf("CurrentNumber:%d\n", currentNumber);
		bool FailTest = false;

		for (int x = 0; x < sizeof(Dividers) / sizeof(int); x++) {
			//printf("Testing:%d\n", x);
			if (currentNumber % Dividers[x] != 0) {
				FailTest = true;
				break;
			}
		}

		if (!FailTest) {
			printf("Found number:%d\n", currentNumber);
			NumberFound = true;
		}

		currentNumber++;

	}

}
