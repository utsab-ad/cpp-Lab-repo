#include<iostream>
	using namespace std;
	
	class Student {
		char name[20];
		int rollNo;
		float marks;
		
		public:
				void input();
				void display();
	};
	
	int main() {
		int i;
		Student s[2];
		
		for(i=0;i<2;i++)
			{
			cout<<"\n Enter details of student "<<i+1<<": "<<endl;
			s[i].input();
			}
		
		for(i=0;i<2;i++)
			{
			cout<<"\n Details of student "<<i+1<<" are : "<<endl;
			s[i].display();
			}
		
		return 0;
	}
	
	void Student:: input()
		{
		
			cout<<"\n Enter Name: ";
			cin>>name;
			
			cout<<"\n Enter Roll.No: ";
			cin>>rollNo;
			
			cout<<"\n Enter Marks: ";
			cin>>marks;
			
		}
		
		void Student:: display()
		{
			
			cout<<"\n Name: "<<name<<endl;
			
			cout<<"\n Roll.No: "<<rollNo<<endl;
			
			cout<<"\n Marks: "<<marks<<endl;
		}
