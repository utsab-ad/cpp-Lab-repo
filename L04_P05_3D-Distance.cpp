/*Point class, objects with (x, y, z), distance between origin and point, */

#include<iostream>
#include<cmath>
    using namespace std;
    
    class Point {
        double x, y, z;
        public: 
            void input();
            void display();
            void distance();
    };
    
    int main() {
        Point p1;
        p1.input();
        p1.display();
        cout<<"Measuring the Distance ....."<<endl;
        p1.distance();
        
        return 0;
    }
    
    void Point:: input() {
        cout<<"Enter dimensions: "<<endl;
        cout<<"X: ";
        cin>>x;
        cout<<"Y: ";
        cin>>y;
        cout<<"Z: ";
        cin>>z;
    }
    
    void Point:: display() {
        cout<<"The dimension detail: ";
        cout<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
    }
    
    void Point:: distance() {
        double dist = sqrt(x*x+y*y+z*z);
        cout<<"The distance between origin and ";
        cout<<"("<<x<<", "<<y<<", "<<z<<") is : "<<dist<<endl;
    }