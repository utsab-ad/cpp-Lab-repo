#include<iostream>
	using namespace std;
	
	void swapp(int &x, int &y)
		{
			int temp = x;
			x=y;
			y=temp;
		}
	int main() {
		int a, b;
		cout<<"Enter two Numbers: "<<endl;
		cin>>a>>b;
		
		cout<<"Before Swap: "<<endl;
		cout<<"a: "<<a<<endl;
		cout<<"b: "<<b<<endl;
		
			swap(a, b);
		
		cout<<"After swap: "<<endl;
		cout<<"a: "<<a<<endl;
		cout<<"b: "<<b<<endl;
		
		return 0;
		
		
	}
