#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    vector<int> processes = {5, 3, 8};   // burst times
    int quantum = 2;                     // time slice

    queue<int> q;

    // insert all processes into queue
    for(int p : processes) {
        q.push(p);
    }

    cout << "Round Robin Execution:\n";

    while(!q.empty()) {

        int curr = q.front();   // get front process
        q.pop();                // remove from front

        if(curr > quantum) {

            cout << "Process executed for " << quantum << endl;

            curr -= quantum;    // remaining time

            q.push(curr);       // insert again at rear
        }
        else {

            cout << "Process finished after " << curr << endl;
        }
    }

    return 0;
}