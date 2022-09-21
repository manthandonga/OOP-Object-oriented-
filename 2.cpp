#include<iostream>
using namespace std;

int main()
{
	int age;
	cin >> age;

	
	try
	{
		if(age<18)
		{
			 throw 1;
		}
		else
		{
			throw 'a';
		}	
	}
	catch(char n)
	{
		cout << "Congratulation! You are eligible for casting your vote."<< endl;
	}
	catch(int n)
	{
		cout << "Sorry, You are not eligible to caste your vote." << endl;
		cout << "You would be able to caste your vote after" << age << "year." << 18-age;

	}
	catch(...)
	{
		cout << "General Exeption Block" << endl;
	}
	return 0;
}
