#include <iostream>
using namespace std;

int main () 
{ int x;
  int guess;
  x = 55;
	

	cout << "What is your guess?"  << endl;
	cin >> guess;

	if (guess < x)
	cout << "Too low!"  << endl;

	else if (guess > x)
	cout << "Too high!" << endl;

	else 
	cout << "That's right! Good job!" << endl;

  return 0;

}
