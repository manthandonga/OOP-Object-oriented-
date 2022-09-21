#include <iostream>
using namespace std;
 int cube();

int main()
{
	
   cube();
    return 0;
} 
inline int cube()
{
	int n,i;
	cout<<"enter any number :";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<endl<<n<<"*"<<i<<"="<<n*i;
	}

}
