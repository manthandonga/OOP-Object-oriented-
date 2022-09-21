#include<iostream>
using namespace std;

class Temp2;

class Temp1
{
	private :
		int s;
		int m;
		int h;
		
		void setdata()
				{
					cout << "HH:";    	   	  cin >> h;
					cout << "MM:";    		  cin >> m;
					cout << "SS:";       	  cin >> s;		
				}
		
		friend void rudra( Temp1, Temp2);
};
class Temp2
{
	private :
		int s1;
		int m1;
		int h1;
		
		void setdata()
				{
					cout << "HH:";    	   	  cin >> h1;
					cout << "MM:";    		  cin >> m1;
					cout << "SS:";       	  cin >> s1;		
				}
		
		friend void rudra( Temp1, Temp2);
};

void rudra( Temp1 t1 , Temp2 t2)
{
	int ts3 , tm3 , th3;
	
	ts3= t1.s + t2.s1;
	tm3=t1.m+t2.m1;	
	th3=t1.h+t2.h1;
	
	while( ts3 >= 60 )
	{
		ts3-60;
		tm3++;
	}
	while( tm3 >= 60 )
	{
		tm3-60;
		th3++;
	}
	
	cout << "s is" << ts3;
	cout << "m is" << tm3;
	cout << "h is" << th3;
}
int main()
{
	
	
	Temp1 t1;
	Temp2 t2;
	
	t1.setdata;
	t2.setdata;
	
	rudra( t1 , t2 );
	
	return 0;
}

