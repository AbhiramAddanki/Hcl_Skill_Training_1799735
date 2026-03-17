#include <iostream>
using namespace std;

int main()
{
    int n = 84;

    for(int i = 2; i*i <= n; i++)
    {
        while(n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }

    if(n > 1)
        cout << n;
}