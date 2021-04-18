#include<iostream>

using namespace std;

bool isPrime(int n) {
	int facCounter = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			facCounter++;
		}
		
	}
	if (facCounter == 2) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int a;
	cout << "Put in an number to check if it is a prime number.";
	cin >> a;
	bool prime = isPrime(a);
	if (prime == true){
		cout << a << " is a prime number.";
	}
	else if (prime == false) {
		cout << a << " is not a prime number.";
	}
	else
		cout << "Error.";



	return 0;
}