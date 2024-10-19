#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.1415;
    cout<<"Let's find the Area of a circle!"<<endl;
    double r;
    double area;
    cout<<"Enter the radius of the Circle: "<<endl;
    cin>>r;
    area = 2*PI*r;
    cout<<"Area of the Circle: "<<area;
    return 0;
    }
