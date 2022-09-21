#include<iostream>
using namespace std;

class p
{
	public :
		float tem;
		
	void getData()
		{
			cout << "Enter Temperature in Celcius : ";
			cin >> tem;
		}
};

class q : public p
{
	public :
		float fahre;
		
	 toFahre()
	{
		fahre = (tem * 1.8) + 32;
		cout << "Fahrenheit is : " << fahre;
	}			
};

class r : public q
{
	public :
		float md;
		
	 tomd()
	{
		md = tem + 273.15;
		cout << endl << "mantham is : " << md;
	}
};

int main()
{
	r m;

	m.getData();
	m.toFahre();
	m.tomd();
	
	return 0;
}
