#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout <<"Enter Array:- " << endl;
	cin >> n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cout<<"enter :" ;
		cin>> a[i];
	}
	cout<<endl;
	cout << "Enter Array Elements:- " << endl;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		     cout<<a[i] << endl;	
		}
	}
	return 0;
	
}
