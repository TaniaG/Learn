#include <iostream>
#include <string>
using namespace std;

int main ()  
{      bool status;
       string color1 ;

	cout << "What is your color?" << endl;
	cin >> color1;



	 if
	 (color1 == "green") 
	 		{
	 			status = true;
	 			cout << "You are doing good!" << endl;
	 		}

	if
	 (color1 == "yellow") 
		    {
		    	status = true;
		    cout << "You are doing okay." << endl;
		    }

	if 
		(color1 == "red") 
			{
				status = true;
			cout << "You are doing poorly." << endl;
			} 

	else 
		status = false;
		cout << "Status unavailable. Enter valid string." << endl; 

	return 0;


		
}