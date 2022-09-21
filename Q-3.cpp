#include<iostream>
using namespace std;

int main()
{
	int i;
	int m[10000], j = 0;
		
	for(i = 2020 ; i <= 3030 ; i++)
	{
		if(i % 4 == 0)
		{
			m[j] = i;		
			cout << m[j] << endl;	
			j++;
		}
	}	
	
	return 0;
}

