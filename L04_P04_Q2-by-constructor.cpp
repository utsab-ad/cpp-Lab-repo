/* Q-2 Rational - assign - print - real - invert using Constructor */
#include<iostream>
    using namespace std;

    class Rational {
        int num;
        int den;

    public:
        Rational(int n, int d); //parameterized construction introduced.
        void display();
        void real();
        void invert();
    };

  Rational:: Rational(int n, int d) {
        num = n;
        den =d;
    }
    
  int main() {
    int n, d;
    cout << "\nEnter Numerator: ";
    cin >> n;
    cout << "\nEnter Denominator: ";
    cin >> d;

    Rational x(n, d);  //using parameterized constructor

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



