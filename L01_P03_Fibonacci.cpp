#include<iostream>
 	using namespace std;
 	
 	void fibo(int num) {
 		int a=0, b=1, c, i;
 		for(i=0;i<num;i++) {
 			c=a+b;
 			cout<<"\t"<<a;
 			a=b;
 			b=c;
		 }
	 }
	 
	 
	 int main() {
	 	int number;
	 	cout<<"Enter no of Terms: ";
	 	cin>>number;
	 	
	 	fibo(number);
	 	return 0;
	 }
