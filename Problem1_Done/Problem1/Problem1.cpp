// Problem1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>


#define NumberToFindSums 999
int bufferPosition;
int findSum();
void findMultiplies(int *buf,int multiplies[],int NumberToFindSumsFor);

int main()
{

	printf("Stared\n");
	int multiplies[] = {3,5};
	int buffer[1000];
	bufferPosition = 0;
	findMultiplies(buffer,multiplies,NumberToFindSums);
	printf("%d",sizeof(buffer));
	for (int x = 0; x < bufferPosition; x++) {
		printf("%d\n",buffer[x]);
	}
	int result = 0;
	for (int x = 0; x < bufferPosition; x++) {
		result = result + buffer[x];
	}
	printf("Result=%d\n", result);
	printf("Finished\n");
}
void findMultiplies(int* buf, int multiplies[], int NumberToFindSumFor) {
	for (int x = 0; x <= NumberToFindSumFor; x++) {
		for (int y = 0; y < sizeof(multiplies); y++) {
			if (x % multiplies[y] == 0) {
				buf[bufferPosition] = x;
				bufferPosition++;
				break;
			}
		}
	}
}

