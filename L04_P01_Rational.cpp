/* Q-1 define the Rational class with methods are defined outside*/

#include<iostream>
    using namespace std;

    class Rational {
        int num;
        int den;

    public:
        void input();
        void display();   
        };
    int main() {
        Rational x;
        x.input();
        x.display();

    return 0;
    }


    void Rational:: input() {
        cout<<"\nEnter Numerator: ";
        cin>>num;
        cout<<"\nEnter Denominator: ";
        cin>>den;
    }

    void Rational:: display() {
        cout<<"\nThe Rational Number is : "<<num<<"/"<<den<<endl;
    }



