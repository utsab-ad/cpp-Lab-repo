// Program to add two numbers in C++ by using Function

#include<iostream>
 using namespace std;
  int add(int a, int b)
  	{
  		return (a+b);
	  }
	int main() {
		int num1, num2;
		cout<<"Enter two Numbers to add: ";
		cin>>num1>>num2;
		cout<<"The addition of the "<<num1<<" and "<<num2<<" is "<<add(num1, num2);
		return 0;
	}
