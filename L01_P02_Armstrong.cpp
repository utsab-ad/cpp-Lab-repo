#include<iostream>
	using namespace std;
	
	int armCheck(int num) {
		int digit, arm=0, flag= 0;
		int temp = num;
		while(num!=0) {
			digit=num%10;
			arm = arm + (digit*digit*digit);
			num = num/10;
		}
		
		return arm; 
		 
	}
	
	int main() {
		int check, number;
		cout<<"Enter a number: ";
		cin>>number;
		
		int tempNum = number;
		
		check = armCheck(number);
		
		if(check == tempNum) {
			cout<<"The number "<<check<<" is Armstrong";
		} else {
						cout<<"The number "<<check<<" is not Armstrong";
		}
		
	}
