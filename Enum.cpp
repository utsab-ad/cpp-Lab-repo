#include<iostream>
    using namespace std;
      enum Days {
            sunday,
            monday,
            tuesday,
            wednesday,
            thursday = 10,
            friday,
            saturday
        };
    int main() {

      Days today, tom;

      today = friday;
      tom = saturday;
      cout<<"The enum value of Today is "<<today<<endl;
      cout<<"The enum value of Tomorrow is "<<tom<<endl;

        return 0;


    }

