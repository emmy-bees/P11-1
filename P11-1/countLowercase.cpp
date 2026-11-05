//Introductory Programming Lab 11 -- Emerson Beesley -- November 5, 2026
#include <iostream>
#include <string>
using namespace std;

int count_letters(string str);

int main(void) {
	string mainUseString;
	cout << "Enter quote: ";
	getline(cin, mainUseString);

	while (!(mainUseString == "")) {
	count_letters(mainUseString);
	cout << endl << endl << "Enter quote: ";
	getline(cin, mainUseString);
	}

	return 0;
}

int count_letters(string str) {
	int numOfLowercase = 0;
	int numOfUppercase = 0;
	int lengthOfString = str.length();
	const int LETTER_ARRAY_SIZE = 100;
	char letterArray[LETTER_ARRAY_SIZE];

	for (int i = 0; i < lengthOfString; i++) {
		letterArray[i] = str.at(i);
	}
	
	for (int i = 0; i < lengthOfString; i++) {
		if ((letterArray[i] >= 97) && (letterArray[i] <= 122)) {
			numOfLowercase++;
		}
	}
	cout << "Number of lowercase letters: " << numOfLowercase << endl;

	for (int i = 0; i < lengthOfString; i++) {
		if ((letterArray[i] >= 65) && (letterArray[i] <= 90)) {
			numOfUppercase++;
		}
	}
	cout << "Number of uppercase letters: " << numOfUppercase << endl;

	return 0;
}



