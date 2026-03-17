#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> v = {{1,3},{2,6},{8,10},{9,12}};

    sort(v.begin(), v.end());

    vector<pair<int,int>> res;

    res.push_back(v[0]);

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i].first <= res.back().second)
        {
            res.back().second = max(res.back().second, v[i].second);
        }
        else
        {
            res.push_back(v[i]);
        }
    }

    for(auto p : res)
        cout << "(" << p.first << "," << p.second << ") ";
}