// Program to check whether the number is Narcissistic or not using Function

#include<iostream>
#include<math.h>
	using namespace std;
	
	int check(int num, int power) {
	int digit, nar=0;
		int temp = num;
		while(num!=0) {
			digit=num%10;
			nar = nar + pow(digit,power);
			num = num/10;
		}
		
		return nar;
		
	}
	
	int main() {
		int number, index, narNum;
		
		cout<<"Enter a Number : ";
		cin>>number;
		
		int tempNum = number; 
		
		while(number!=0)
			{
				number= number/10;
				index++;
			}
		cout<<"No of Digit of "<<tempNum<<" is "<<index<<endl;
		
		narNum = check(tempNum, index);
	 if (narNum == tempNum) {
	 	cout<<"Yes The Number "<<tempNum<<" is Narcissistic"<<endl;
	 } else {
	 	cout<<"No The Number "<<tempNum<<" is Not Narcissistic"<<endl;
	 }
	
	return 0;		
		
	}
