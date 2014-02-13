#include <iostream>
using namespace std;

int main () {
	bool flag;
	int num1, num2; 

	cout << "What is your number?" << endl;
	cin >> num1;
	cout << "What is your next number?" << endl;
	cin >> num2;

	if (num1 == num2)
	flag = true;

	else 
	flag = false;

	if (flag)
	cout << "same";

	else 
	cout << "different";

	return 0;

}
