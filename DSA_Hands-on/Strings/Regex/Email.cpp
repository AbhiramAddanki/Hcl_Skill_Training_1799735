#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string email;

    cout<<"Enter email: ";
    cin>>email;

    regex pattern("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");

    if(regex_match(email, pattern))
        cout<<"Valid Email"<<endl;
    else
        cout<<"Invalid Email"<<endl;

    return 0;
}
//Use regex_match() in C++ to verify that the entire email string matches this pattern.