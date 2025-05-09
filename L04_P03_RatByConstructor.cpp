#include<iostream>
    using namespace std;

    class Rational {
        int num;
        int denum;
        float numrat;

    public:
        Rational(int n, int d); //parameterized construction introduced.
        void input();
        void display();
        void real();
        void invert();
    };
  Rational:: Rational(int n, int d) {
        num = n;
        denum =d;
    }
    int main() {
        cout<<"Program Using Parameterized Constructor."<<endl;
        Rational ratObject(30, 7);

        ratObject.display();
        ratObject.real();
        ratObject.invert();
        cout<<"\n After Inversion: "<<endl;
        ratObject.display();
         cout<<endl;

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
          int realno = num/denum;
          cout<<"\n real: "<<realno<<endl;
    }

    void Rational:: invert() {
        int temp = num;
        num = denum;
        denum = temp;
    }



