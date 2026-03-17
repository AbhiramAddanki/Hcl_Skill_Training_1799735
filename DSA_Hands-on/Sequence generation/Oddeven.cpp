#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int num = 1;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            cout << num << " ";
        else
        {
            cout << -num << " ";
            num++;
        }
    }
}