//A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3 - digit numbers.

#include <iostream>

#define MaximumNumber 999


void FindPalindromNumber();
int FindHighestNumber(int Array[], int& sizeOfArray);
void ReverseArray(char *ArrayToReverse, char* inverted);
int main()
{
	FindPalindromNumber();
}
 
void FindPalindromNumber() {

	int FoundPalindroms[10000];
	int FoundPointer = 0;

	for (int x = MaximumNumber; x > 0; x--) {
		for (int y = MaximumNumber; y >= 0; y--) {
			//printf("y:%d\n", y);
			int multipliedNumber = x * y;
			if (multipliedNumber == 0) {
				continue;
			}
			int revesed, remainder = 0;
			char Original[10];
			char Inverted[10];

			_itoa_s(multipliedNumber, Original,10);
			strcpy_s(Inverted, 10 * sizeof(char), Original);
			ReverseArray(Original, Inverted);

			int SizeOfString = strlen(Original);
			int SizeOfString1 = strlen(Inverted);
			if (strcmp(Original, Inverted) == 0) {
				printf("Found Palindrom: %d\n", multipliedNumber);
				FoundPalindroms[FoundPointer] = multipliedNumber;
				FoundPointer++;
			}
			else
			{
				//printf("Not Equal");
			}			
		}
	}
	int sizeOfArray = sizeof(FoundPalindroms) / sizeof(int);
	int highestNumber = FindHighestNumber(FoundPalindroms, sizeOfArray);

	printf("Highest palindrom number:%d", highestNumber);
}

int FindHighestNumber(int Array[],int &sizeOfArray) {
	int highestNumber = 0;
	for(int x = 0; x <sizeOfArray; x++) {
		int TesD = Array[x];
		if (TesD > highestNumber) {
			highestNumber = TesD;
		}
	}
	return highestNumber;
}


void ReverseArray(char *ArrayToReverse, char *inverted) {
	int SizeOfString = strlen(ArrayToReverse);
	char* Reversed = (char*)malloc((SizeOfString + 1) * sizeof(char));


	//for (int x = 0; x < SizeOfString; x++) {
	//	Reversed[x] = ArrayToReverse[SizeOfString - 1 - x];
	//}

	//strcpy_s(inverted,10*sizeof(char),Reversed);
	
	for (int x = SizeOfString-1; x >= 0; x--) {
		inverted[x]=ArrayToReverse[SizeOfString-1-x];
	}
	return;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
