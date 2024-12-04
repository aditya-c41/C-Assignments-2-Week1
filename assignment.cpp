//Find the output for this code. Let input:- 2 3 6

#include <iostream>
using namespace std;
int main()
{
int x;
cout << "Enter first number\n";
cin >> x; // user will give ‘x’ a value.
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; // user will give ‘y’ a value.
int Z = (x * y) % m;
cout << "Output is: " << Z;
}
// OUTPUT FOR ABOVE QUESTION IS 0


// Find the output for this code. Let input:- 3 2

#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);
}
//OUTPUT FOR ABOVE QUESTION IS 1 1


//Find the output for this code. Let input:- 2 3

#include <iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
x+=y;
x-=y;
x%=y;
cout<<x;
}
//OUTPUT FOR ABOVE CODE IS 2


//WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"Enter Radius = ";
    cin>>r;
    cout<<"Enter Height = ";
    cin>>h;
    cout<<"Volume of CYLINDER = "<<3.14*r*r*h;
}

//WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char ch1 , ch2;
    cout<<"Enter 1st character = ";
    cin>>ch1;
    cout<<"Enter 2nd character = ";
    cin>>ch2;
    int x =(int)ch1-(int)ch2;
    cout<<"Diffrence of "<<ch1<<" and "<<ch2<<" is "<<x;
}


//Find the output of the below code
#include<iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i;
}
//OUTPUT FOR ABOVE CODE IS 49