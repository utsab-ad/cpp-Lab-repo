#include<iostream>

    using namespace std;

        enum Light {
        red=5,
        green,
        yell,
        };


    int main() {

        Light go, wait, stop;

        stop=red;
        wait=yell;
        go=green;

        cout<<"The respective traffic signals using enum are : "<<endl;
        cout<<"GO: "<<go<<endl;
        cout<<"Wait: "<<wait<<endl;

        cout<<"Stop: "<<stop<<endl;
        return 0;

    }

