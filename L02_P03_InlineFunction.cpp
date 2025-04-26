#include<iostream>

    using namespace std;

    inline int add(int num1, int num2, int num3)
        {

            return (num1 + num2 + num3);
        }
    inline float area(float radius)
        {

            return (3.14*radius*radius);
        }

    int main() {
    int a, b, c;
    float rad;
    cout<<"Please Enter three Numbers : ";
    cin>>a>>b>>c;

    cout<<"Please Enter the Radius : ";
    cin>>rad;

    float areaA = area(rad);


    int resullt = add(a, b, c);

    cout<<"The sum of the given three Number is : "<<resullt<<endl;
    cout<<"The area of the Given Radius is : "<<areaA<<endl;

    return 0;
    }
