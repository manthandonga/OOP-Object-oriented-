#include<iostream>
#include<string.h>
using namespace std;

class Cars
{
	public :
		int id;
		char company_name[1000];
		char color[1000];
		char model[1000];
		int release_year;
};

int main()
{
	Cars m[100];
	int i;
	
	for(i = 0 ; i < 4 ; i++)
	{
		cout << "Details of Car no... : ";
		cout << i+1;
			
		cout << endl << "Enter ID : ";
		cin >> m[i].id;		
		
		cout << "Enter Company Name : ";
		cin >> m[i].company_name;
		
		cout << "Enter Color : ";
		cin >> m[i].color;
		
		cout << "Enter Model : ";
		cin >> m[i].model;
		
		cout << "Enter Release Year : ";
		cin >> m[i].release_year;

	}
	for(i = 0 ; i < 4 ; i++)
	{
		cout << endl <<"Details of Car no... : ";
		cout << i+1 << endl;
			
		cout << "ID : ";
		cout << m[i].id << endl;		
		
		cout << "Compane Name : ";
		cout << m[i].company_name << endl;
		
		cout << "Color : ";
		cout << m[i].color << endl;
		
		cout << "Model : ";
		cout << m[i].model << endl;
		
		cout << "Release Year : ";
		cout << m[i].release_year << endl;
			
	}	
	return 0;
}
