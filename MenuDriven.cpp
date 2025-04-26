#include<iostream>
        using namespace std;

    inline int add(int a, int b)  {
        return (a+b);
    }
    inline int sub(int a, int b)  {
        return (a-b);
    }
     inline int mul(int a, int b)  {
        return (a*b);
    }
     inline int square(int a)  {
        return (a*a);
    }
 int exitP() {
        return 0;
    }


        int main()
            {
            int choice;
            int result, num1, num2;

            cout<<"Enter your Choice:.."<<endl;
            cout<<"1: Add two Numbers. "<<endl<<"2: Subtract two Numbers. "<<endl<<"3: Multiply two Numbers. "<<endl<<"4: Square of the Number. "<<endl<<"5: Exit Program."<<endl<<" Your Choice : ";
            cin>>choice;

               switch(choice)  {

                case 1:
                    cout<<"\n Enter Number a : ";
                    cin>>num1;
                    cout<<"\n Enter another number to add : ";
                    cin>>num2;
                    result = add(num1, num2);
                    cout<<"\n The Sum of "<<num1<<" and "<<num2<<" is : "<<result<<endl;
                    break;

                case 2:
                    cout<<"\n Enter Number a : ";
                    cin>>num1;
                    cout<<"\n Enter another number to Subtract : ";
                    cin>>num2;
                    result = sub(num1, num2);
                    cout<<"\n The Difference of "<<num1<<" and "<<num2<<" is : "<<result<<endl;
                    break;

                  case 3:
                    cout<<"\n Enter Number a : ";
                    cin>>num1;
                    cout<<"\n Enter another number to Multiply : ";
                    cin>>num2;
                    result = mul(num1, num2);
                    cout<<"\n The Multiplication of "<<num1<<" and "<<num2<<" is : "<<result<<endl;
                    break;

                case 4:
                    cout<<"\n Enter Number a to find its square : ";
                    cin>>num1;
                    result = square(num1);
                    cout<<"\n The square of "<<" is : "<<result<<endl;
                    break;
                case 5:
                    cout<<"Your Choice is to Quit the Program."<<endl;
                    exitP();
                    break;

                default:
                    cout<<"Invalid Choice"<<endl;



               }

            return 0;


            }

