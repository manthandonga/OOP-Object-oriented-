#include<iostream>
using namespace std;
int main()
{	
	char m[100];
	int i;
   
	cout<< "Enter a letter : ";
	cin>>a;
   
	for (i = 0 ; a[i] ; i++) 
	{
    	if(m[i] >= 97 && m[i] <= 122)
    	{
    			m[i] = m[i] - 32;
		}
        
        	
        else if(m[i] >= 65 && m[i] <= 90)
        {
        	m[i] = m[i] + 32;
		}
        	
    	
	}
	cout<< "Letter in Toggle Case = "<< m;

}
