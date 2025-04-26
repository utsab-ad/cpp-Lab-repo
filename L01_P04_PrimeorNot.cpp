#include<iostream>
 using namespace std;
 
 int primeCheck(int num) {
 	int i;
 	int tempNum = num;
 	for(i=2;i<=num;i++)
 		{
 			if(num%i==0) {
 				break;
			 }
		 }
		if(i == tempNum) {
			return 1;
		} else {
			return 0;
		}
	
 }
 
 int main() {
 	int number, i, check;
 	cout<<"Enter a number to check: ";
 	cin>>number;
 	
 	check = primeCheck(number);
 	if(check) {
 		cout<<"The Given Number is Prime.";
	 } else {
	 cout<<"The Given Number is Not Prime.";
	 }
 	
 	return 0;
 	
 	
 }
