#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string invoice;
    cout << "Enter invoice number: ";
    cin >> invoice;

    regex pattern("^INV-\\d{4}(0[1-9]|1[0-2])-\\d{6}$");

    if(regex_match(invoice, pattern))
        cout << "Valid Invoice" << endl;
    else
        cout << "Invalid Invoice" << endl;

    return 0;
}