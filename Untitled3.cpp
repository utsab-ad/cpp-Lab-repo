#include<iostream>
    using namespace std;

    class Rational {
        int num;
        int denum;
        float numberrat;

    public:
        void input();
        void display();
        void real();
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
        cout<<"\nEnter Denumerator: ";
        cin>>denum;
    }

    void Rational:: display() {
        cout<<"\nThe Rational Number is : "<<num<<"/"<<denum<<endl;
    }

    void Rational:: real() {
          int realno = 22/7;
          cout<<"real: "<<realno;
    }



