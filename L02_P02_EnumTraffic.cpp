// Example Program to define "enum" "Traffic_Light" and  displaying the enum values

#include<iostream>

    using namespace std;

        enum Traffic_Light {
        red=5,
        green,
        yell,
        };


    int main() {

        Traffic_Light go, wait, stop;

        stop=red;
        wait=yell;
        go=green;

        cout<<"The respective traffic signals using enum are : "<<endl;
        cout<<"GO: "<<go<<endl;
        cout<<"Wait: "<<wait<<endl;

        cout<<"Stop: "<<stop<<endl;
        return 0;

    }

