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
		Student s1, s2;
		
		s1.input();
		s2.input();
		
		s1.display();
		s2.display();
		
		return 0;
	}
	
	void Student:: input()
		{
			cout<<"\n Enter Details :"<<endl;
			cout<<"\n Enter Name: ";
			cin>>name;
			
			cout<<"\n Enter Roll.No: ";
			cin>>rollNo;
			
			cout<<"\n Enter Marks: ";
			cin>>marks;
			
		}
		
		void Student:: display()
		{
			cout<<"\n Details are : "<<endl;
			cout<<"\n Name: "<<name<<endl;
			
			cout<<"\n Roll.No: "<<rollNo<<endl;
			
			cout<<"\n Marks: "<<marks<<endl;
		}
