#include<iostream>
         using namespace std;

            int add(int a, int b)
                {
                    cout<<"Int+int"<<endl;
                    return (a+b);
                }
            int add(int a, int b, int c)
                {
                    cout<<"Int+int+int"<<endl;
                    return (a+b+c);
                }
            float add(float a, int b)
                {
                    cout<<"float+Int"<<endl;
                    return (a+b);
                }
            float add(float a, float b)
                {
                    cout<<"float + floats"<<endl;
                    return (a+b);
                }




    int main() {



            cout<<"\n Result: "<<add(2, 3)<<endl;
            cout<<"\n Result: "<<add(2, 3, 3)<<endl;
            cout<<"\n Result: "<<add(2.19, 3)<<endl;
            cout<<"\n Result: "<<add(2.19, 3.19)<<endl;
            return 0;
    }
