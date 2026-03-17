#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2,4,6,8};

    vector<int> prefix(arr.size());

    prefix[0] = arr[0];

    for(int i = 1; i < arr.size(); i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    for(int x : prefix)
        cout << x << " ";
}