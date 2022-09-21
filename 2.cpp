#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public :
		int id;
		char name[1000];
		int age;
		char brand[100];
		int number;
		char city[1000];
		int sim_val;
		
		void setData(int id, char name[],int age,char brand[],int number,char city[],int sim_val)
		{
			this->id=id;
			strcpy(this->name,name);
			this->age=age;
			strcpy(this->brand,brand);
			this->number=number;
			strcpy(this->city,city);
			this->sim_val=sim_val;
		}
		void getData()
		{
			cout<<"id:"<<this->id
			<<",name :"<<this->name
			<<",age :"<<this->age
			<<",brand :"<<this->brand
			<<",number :"<<this->number
			<<",city :"<<this->city
			<<",sim_val :"<<this->sim_val<<endl;
		}
};

int main()
{
	Student s1,s2,s3,s4,s5;
	s1.setData(1,"khushbu",20,"jio",123678,"surat",2022);
	s2.setData(2,"kriya",18,"jio",122344,"baroda",2023);
	s3.setData(3,"kishan",20,"vi",56778,"surat",2015);
	s4.setData(4,"harsh",14,"vi",500778,"surat",2015);
	s5.setData(5,"khalifa",15,"airtail",7890050,"vapi",2016);
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
	return 0;
}
