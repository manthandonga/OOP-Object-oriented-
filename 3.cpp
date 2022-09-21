#include<iostream>
using namespace std;
	class higher
	{
		public :
			int x;
			void setdata(int x)
				{	
					this->x=x;
				}
			void getdata()
				{
					cout<<"X Is :- " << this->x;
				}

	
		higher operator<(higher n)
			{
				higher temp;
				if(this->x > n.x)
					{
						temp.x=this->x;
					}
				else
				{
					temp.x=n.x;
				}
				return temp;
			}
	};
	int main()
	{
		higher h1,h2,h3;
		h1.setdata(10);
		h2.setdata(11);
		h3=h2<h1; // h3 = h2.operator<(h1)
		h3.getdata();
		return 0;
	}
