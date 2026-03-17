#include <iostream>
using namespace std;

int main()
{
    int n = 28;
    int count = 0;
    int largest = 1;

    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            count++;
            largest = i;
        }
    }

    cout << "Count: " << count << endl;
    cout << "Largest: " << largest << endl;
}