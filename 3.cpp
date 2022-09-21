#include<iostream>
using namespace std;

class hotel
{
	private:
		int id;
		char name[100];
		int rating;
		char location[100];
		int establish_year;
		int staff_quantity;
		int room_quantity;
	public:
		static char type[100];
		
		void setdata()
{
	cout << "Enter Id :-";        		   	  cin >> this->id;
	cout << "Enter Name :-";       			  cin >> name;
	cout << "Enter Rating :-";        		  cin >> rating;
	cout << "Enter Location :-";        	  cin >> location;
	cout << "Enter Establish_year :-";        cin >> establish_year;
	cout << "Enter Staff_quantity :-";        cin >> staff_quantity;
	cout << "Enter Room_quantity :-";         cin >> room_quantity;
	
}

void getdata()
{
	cout<<" | Id:"<<this->id<< endl 
		<<" | Name :"<<this->name<< endl 
		<<" | Rating :"<<this->rating<< endl 
		<<" | Location :"<<this->location<< endl 
		<<" | Establish_year :"<<this->establish_year<< endl 
		<<" | Staff_quantity :"<<this->staff_quantity<< endl 
		<<" | Room_quantity :"<<this->room_quantity<< endl 
		<<" | Hotel_Type:-"<<this->type << endl;
}

};

char hotel::type[100]="Hotel";

int main()
{
	hotel s[100];
	
	int n,i;
	cout<<"Hotal Is " << hotel :: type<<endl;
	cout << "How Many Hotal :-";
	cin >> n;
	for(i=0; i<n; i++)
	{
		s[i].setdata();
	}
	for(i=0; i<n; i++)
	{
		s[i].getdata();
	}
	
	return 0;
}
