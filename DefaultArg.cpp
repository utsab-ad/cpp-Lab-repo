#include<iostream>
        using namespace std;
    int compute(int a, int b, int c = 0, int d = 0) {
        return (a+b+c+d);
    }


    int main() {
        int num1, num2, num3, num4;

            cout<<"Enter Number : ";
            cin>>num1;
            cout<<"Enter Another Number : ";
            cin>>num2;
            cout<<"Another One : ";
            cin>>num3;
            cout<<"The last One : ";
            cin>>num4;

            cout<<"The result Of functions using Default Argument. "<<endl;
            cout<<"The Sum of given first Two Numbers is : "<<compute(num1, num2)<<endl;
            cout<<"The Sum of given first Three Numbers is : "<<compute(num1, num2, num3)<<endl;
            cout<<"The Sum of given Numbers is : "<<compute(num1, num2, num3, num4)<<endl;

            return 0;


    }
