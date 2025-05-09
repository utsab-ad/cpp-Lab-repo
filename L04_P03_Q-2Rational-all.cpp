/* Q-2 Rational - assign - print - real - invert*/

#include<iostream>
    using namespace std;

    class Rational {
        int num;
        int den;

    public:
        void input();
        void display();
        void real();
        void invert();
    };

  int main() {

    Rational x;

    x.input();
    x.display();
    x.real();

    cout << "\nAfter Inversion" << endl;
    x.invert();
    cout << endl;
    x.display();
    cout << endl;
    x.real();
    cout << endl;

    return 0;
}
    void Rational:: input() {
        cout<<"\nEnter Numerator: ";
        cin>>num;
        cout<<"\nEnter Denumerator: ";
        cin>>den;
    }

    void Rational:: display() {
        cout<<"\nThe Rational Number is : "<<num<<"/"<<den<<endl;
    }

    void Rational:: real() {
          int realno = num/den;
          cout<<"\n real: "<<realno<<endl;
    }

    void Rational:: invert() {
        int temp = num;
        num = den;
        den = temp;
    }



