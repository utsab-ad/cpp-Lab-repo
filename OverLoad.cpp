#include<iostream>
         using namespace std;

            int add(int a, int b)
                {
                    return (a+b);
                }
            int add(int a, int b, int c)
                {
                    return (a+b+c);
                }
            float add(float a, int b)
                {
                    return (a+b);
                }
            float add(float a, float b)
                {
                    return (a+b);
                }
            double add(double a, int b) {
                return (a+b);
            }



    int main() {
            cout<<"\n Result: "<<add(2, 3)<<endl;
            cout<<"\n Result: "<<add(2, 3, 3)<<endl;
            cout<<"\n Result: "<<add(2.19, 3)<<endl;
            cout<<"\n Result: "<<add(2.19, 3.19)<<endl;
             return 0;
    }
