#include<iostream>
	using namespace std;
	
	class Distance {
		int ft;
		int in;
		
		public:
				void input();
				void display();
				void addDist(Distance D1, Distance D2);
	};
	
	int main() {
		Distance s1, s2, result;
		
		cout<<"\n For First "<<endl;
		s1.input();
		cout<<"\n For Second "<<endl;
		s2.input();
		
		result.addDist(s1, s2);
		cout<<"\n After Addition: "<<endl;
			result.display();
				
		return 0;
	}
	
	void Distance:: input()
		{
			cout<<"\n Enter Feet: ";
			cin>>ft;
			
			cout<<"\n Enter Inch: ";
			cin>>in;
			
		}
		
		void Distance:: display()
		{
			cout<<"\n Feet: "<<ft<<endl;
			cout<<"\n Inch: "<<in<<endl;
	

		}
		
		void Distance::addDist(Distance D1, Distance D2)
			{
			
				in = D1.in+D2.in;
				ft = D1.ft+D2.ft+(in/12);
				in = in%12;

			}
		
		
