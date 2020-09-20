#include <iostream>
#include <string>

using namespace std;

void reverseString(string& s) {

	for (long long int i = 0; i < s.size() / 2; i++) {
		swap(s[i], s[s.size() - 1 - i]);
	}

}

void pushZeros(string& min, string& max) {



	for (long long int i = min.size(); i < max.size(); i++) {
		min += '0';
	}

}

string raznost(const string& minuend, const string& subtrahend, const string& maxString) {
	string result;

	int dec = 0;

	for (long long int i = 0; i < maxString.size(); i++) {
		char befRes = '0';

		int x = (minuend[i] - '0') - dec + 10;
		int vychit = subtrahend[i] - '0';

		if ((x - vychit) / 10 == 0) {
			befRes = (x - vychit) + '0';
			dec = 1;
		}
		else {
			befRes = (x - vychit - 10) + '0';
			dec = 0;
		}

		cout << befRes << endl;

		result += befRes;
		
	}

	if (minuend.size() < subtrahend.size()) {
		result += '-';
	}
	
	return result;
}
 
int main() {
	string minuend;
	string subtrahend;
	cout << "minuend" << endl;
	cin >> minuend;


	cout << "subtrahend" << endl;
	cin >> subtrahend;

	string minString;
	string maxString;

	if (minuend.size() > subtrahend.size()) {
		maxString = minuend;
		minString = subtrahend;
	}
	else {
		maxString = subtrahend;
		minString = minuend;
	}

	reverseString(maxString);
	reverseString(minString);

	

	pushZeros(minString, maxString);

	for (long long int i = maxString.size() - 1; i >= 0; i--) {
		cout << maxString[i];
	}
	cout << endl;

	for (long long int i = minString.size() - 1; i >= 0; i--) {
		cout << minString[i];
	}
	cout << endl;


	string result = raznost(minuend, subtrahend, maxString);

	for (long long int i = result.size() - 1; i >= 0; i--) {
		cout << result[i];
	}

	return 0;
}