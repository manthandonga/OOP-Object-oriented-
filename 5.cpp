#include<iostream>
#include<string.h>
using namespace std;

class company
{
    private :
    	
    	   int id;
           char [100];
           int staff_quantity;
           int revenue;
           int raw_diamonds;
           int export_diamonds;
           char ceo[100];	
		
	
	public :
		
			company( int id,char name[100],int staff_quantity,int revenue,int raw_diamonds,int export_diamonds,char ceo[100])
			{
				this->id=id;
				strcpy(this->name,name);
				this->staff_quantity=staff_quantity;
				this->revenue=revenue;
				this->raw_diamonds=raw_diamonds;
				this->export_diamonds=export_diamonds;
				strcpy(this->ceo,ceo);
			}
			
				company(company &c)
			{
				this->id=c.id;
				strcpy(this->name,c.name);
				this->staff_quantity=c.staff_quantity;
				this->revenue=c.revenue;
				this->raw_diamonds=c.raw_diamonds;
				this->export_diamonds=c.export_diamonds;
				strcpy(this->ceo,c.ceo);
			}
			
			void getdata()
			{
				cout<<"id= "<<this->id<<"\nname= "<<this->name<<"\nstaff_quantity="<<this->staff_quantity<<"\nrevenue= "<<this->revenue<<"\nraw_diamonds= "<<this->raw_diamonds<<"\nexport_diamonds= "<<this->export_diamonds<<"\nceo= "<<this->ceo<<endl<<endl;                   
			}
		
		
};

int main()
{
		company c1(1,"tata",20,250,20,200,"aksh");
		company c2(2,"jio",25,200,150,200,"jay");
		company c3=c1;
	c1.getdata();
	c2.getdata();
	c3.getdata();
	return 0;
}


