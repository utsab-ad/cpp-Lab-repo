#include<iostream>
	using namespace std;
	
	int main()
		{
			int a = 10;
			int &x = a;
			
			cout<<"\n The Value of a: "<<a<<endl;
			cout<<"\n Value of x: "<<x<<endl;
			
			x=99;
			
			cout<<"\n a = "<<a<<endl;
			cout<<"\n x = "<<x<<endl;
			
			cout<<"\n Address of a = "<<&a<<endl;
			cout<<"\n Address of x = "<<&x<<endl;
			
			return 0;
		}
