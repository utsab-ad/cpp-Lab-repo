//Program to calculate simple interest with default rate = 4.5%, for student = 2%, employee = 6%

#include<iostream>
#include<cstring>
    using namespace std;

    double simpleInterest(int pAmount, int dTime, float dRate = 4.5)
        {
            return ((pAmount*dTime*dRate)/100);
        }
    int main() {
        int principal, time;
        float rate;
        char role[20];

            cout<<"\n Enter Principal Amount: ";
            cin>>principal;
            cout<<"\n Enter the time/duration: ";
            cin>>time;

            cout<<"Enter Your account type:: "<<endl<<"1. `std` for student."<<endl<<"2. `emp` for employee."<<endl;
            cin>>role;

        if(strcmp(role, "std")== 0)
            {
            cout<<"Your Interest Amount is :"<<simpleInterest(principal, time, 2)<<endl;
            } else if(strcmp(role, "emp")== 0) {
                    cout<<"Your Interest Amount is :"<<simpleInterest(principal, time, 6)<<endl;
            } else {
                    cout<<"Your Interest Amount is :"<<simpleInterest(principal, time)<<endl;
            }
    return 0;

    }
