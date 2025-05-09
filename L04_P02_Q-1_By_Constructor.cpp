/* Q-1 define the Rational class with methods are defined outside by constructor*/
#include<iostream>
using namespace std;

class Rational {
    int num;
    int den;

public:
    // Parameterized constructor
    Rational(int n, int d);
    void display(); 
};

Rational::Rational(int n, int d) {
    num = n;
    den =  d;
}

void Rational::display() {
    cout << "\nThe Rational Number is: " << num << "/" << den << endl;
}

int main() {

    Rational x(22, 7);    // Parameterized constructor is called
    x.display();

    return 0;
}
