#include <iostream>
using namespace std;
int main()
{

   float x,y,z,area;

    cout<<"Input X : ";
    cin>>x;
    cout<<"Input Y : ";
    cin>>y;
    cout<<"Input Z : ";
    cin>>z;
    cout<<"\n";
    area = ((((2*x)+1) + ((2*z)+2))*((2*y)+2))/2;
    cout<<"Area of the trapezoid is "<<area<<endl;

    return 0;
}

