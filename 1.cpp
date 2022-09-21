#include<iostream>
using namespace std;

class x
{
	public :
		int a, b, c;
};

class y : public x
{
	public :
		int d;
		void setData()
		{
			cout << "Enter value of a, b and c : " << endl;
			cin >> a >> b >> c;
		}		
		
		void getData()
		{
			a = a*a*a;
			b = b*b*b;
			c = c*c*c;
			
			cout << endl << "Cube of a, b and c is : " << endl;
			cout << a << "  " << b << "  " << c;
			
			d = a+b+c;
			cout << endl << endl << "Sum of three number's cube is : ";
			cout << d;
		}
		
};

int main()
{
	y m;
	
	m.setData();
	m.getData();
	
	return 0;
}
