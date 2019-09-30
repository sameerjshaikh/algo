#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	int numWords, i, j, k;
	string words[20];
	//string wordChain[20];
	cout << "Enter number of words to chain: ";
	cin >> numWords;
	cout << "Enter the words:" << endl;
	for (i = 0; i < numWords; i++) {
		cin >> words[i];
	}
	//wordChain[0] = words[0];
	bool found = false;
	for (i = 0; i < numWords-1; i++) {
		string currentWord = words[i];
		int currWordSize = currentWord.size();
		for (k = 3; k < currWordSize; k++) {
			string currWordSubStr = currentWord.substr(currWordSize - k, k);
			for (j = i+1; j < numWords; j++) {
				string nextWord = words[j];
				//int nextWordSize = nextWord.size();
				string nextWordSubStr = nextWord.substr(0, k);
				if (nextWordSubStr == currWordSubStr) {
					if (!found) {
						cout << endl;
						cout << currentWord << endl;
					}
					cout << nextWord << endl;
					found = true;
				}
			}
		}
	}
	if (!found) {
		cout << endl;
		cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}
