#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    vector<string> logs = {"INFO","WARN","ERROR","INFO","ERROR","ERROR"};

    map<string,int> freq;

    for(string event : logs)
    {
        freq[event]++;
    }

  
    cout<<"Event Frequencies:\n";
    for(auto p : freq)
    {
        cout<<p.first<<" -> "<<p.second<<endl;
    }

    string mostCommon="";
    int maxFreq=0;

    for(auto p : freq)
    {
        if(p.second > maxFreq)
        {
            maxFreq = p.second;
            mostCommon = p.first;
        }
    }

    cout<<"\nMost common event: "<<mostCommon<<endl;
}