#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string text = "Call me at 9876543210 or +91 9876543210 tomorrow";

    regex pattern("(\\+?\\d{1,3}[\\s-]?)?\\d{10}");

    auto start = sregex_iterator(text.begin(), text.end(), pattern);
    auto end = sregex_iterator();

    for(auto i = start; i != end; ++i)
    {
        cout << "Phone: " << i->str() << endl;
    }

    return 0;
}
//Scan the whole text using (sregex_iterator) and print all matched phone numbers.(approach)