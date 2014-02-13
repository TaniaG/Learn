#include <iostream>
using namespace std;

int main () {
 float num1, num2, num3;
 string what;
cout << "What is your first number?" << endl;
cin >> num1;
cout <<  "What is your second number?" << endl;
cin >> num2;
cout << "What operation?" << endl;
cin >> what;

if (what == "+")
	num3 = num1 + num2;

 	
else if (what == "-") 
	num3 = num1 - num2;


else if (what == "*")
	num3 = num1 * num2;


else if (what == "/")
	num3 = num1 / num2;

else 
	cout << "Not possible" << endl;


cout << "The answer is" << endl;
cout << num3;

return 0;
}