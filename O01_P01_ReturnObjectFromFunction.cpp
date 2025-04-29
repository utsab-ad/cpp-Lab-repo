//  Returning Object from Function 

#include<iostream>
using namespace std;

class Complex  {
    private: 
        int real;
        int img;
        
    public: 
        void input();
        void display();
        Complex addComplex(Complex C1, Complex C2);
};

int main() {
    Complex first, second, result;
    
    cout << "\n For First";
    first.input();
    
    cout << "\n For Second";
    second.input();
    
    cout << "\n First Complex: ";
    first.display();
    
    cout << "\n Second Complex: ";
    second.display();

    result = result.addComplex(first, second); 
    cout << "\n After Addition= --> ";
    result.display();
    
    return 0;
}

void Complex::input() {
    cout << "\n Enter Real: ";
    cin >> real;
    
    cout << "\n Enter Imaginary: ";
    cin >> img;
}

void Complex::display() {
    cout << "\n The Datas Are:" << endl;
    cout << "Real : " << real << endl;
    cout << "Imaginary : " << img << endl;
}

Complex Complex::addComplex(Complex C1, Complex C2) {
    Complex result;
    result.real = C1.real + C2.real;
    result.img = C1.img + C2.img;
    return result;
}
