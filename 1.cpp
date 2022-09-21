#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	a=5;
	b=0;
	
	try
	{
		if(b==0)
		{
			 throw 15;
		}
		else
		{
			c=a/b;
			cout << c << endl;
		}	
	}
	catch(float n)
	{
		cout << "Not Possible...."<< endl;
	}
	catch(int n)
	{
		cout << "Error" << endl;
	}
	catch(...)
	{
		cout << "General Exeption Block" << endl;
	}
	return 0;
}
