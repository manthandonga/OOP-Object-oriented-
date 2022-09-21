#include<iostream>
using namespace std;
class cricket
{
	
};
class T20Match : public cricket
{
	public:
	getTotalOvers()
	{
		cout << "T20 Cricket Over Is 20" << endl;
	}
	
};

class TestMatch : public cricket
{
	public:
	getTotalOvers()
	{
		cout << "T20 Cricket Over Is 90" << endl;
	}	
	
};

	int main ()
		{
			TestMatch md1;
			T20Match md2;
			md1.getTotalOvers();
			md2.getTotalOvers();
			return 0;
		}
	
	
