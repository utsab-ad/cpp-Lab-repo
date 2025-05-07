#include<iostream>
	using namespace std;
	
	class Complex {
		int real;
		int img;
		
		public:
				void input();
				void display();
				void addComplex(Complex C1, Complex C2);
	};
	
	int main() {
		Complex s1, s2, result;
		
		cout<<"\n For First "<<endl;
		s1.input();
		cout<<"\n For Second "<<endl;
		s2.input();
		
		result.addComplex(s1, s2);
		cout<<"\n After Addition: "<<endl;
			result.display();
				
		return 0;
	}
	
	void Complex:: input()
		{
			cout<<"\n Enter Real: ";
			cin>>real;
			
			cout<<"\n Enter Imaginary: ";
			cin>>img;
			
		}
		
		void Complex:: display()
		{
			cout<<"\n Real: "<<real<<endl;
			cout<<"\n Imaginary: "<<img<<endl;
	

		}
		
		void Complex::addComplex(Complex C1, Complex C2) {
			real =C1.real+C2.real;
			img = C1.img+C2.img;
		}
		
		
