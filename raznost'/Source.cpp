#include <iostream>
#include <string>

using namespace std;

void reverseString(string& a) {

	for (long long int i = 0; i < a.size() / 2; i++) {
		swap(a[i], a[a.size() - i - 1]);
	}

}

void pushZeros(string& min, string& max) {

	for (long long int i = min.size(); i < max.size(); i++) {
		min += '0';
	}
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

	return 0;
}