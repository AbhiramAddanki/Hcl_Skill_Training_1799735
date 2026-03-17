#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s1,s2;
    cin>>s1;
    cin>>s2;
    bool flag=true;
    int count[26]={0};
    int n=s1.length();
    int m=s2.length();
    if(n!=m){
      cout<<"FALSE"<<endl;
    }
    for(int i=0;i<n;i++){
      count[s1[i]-'a']++;
      count[s2[i]-'a']--;
    }
    for(int x:count){
      if(x!=0){
        flag=false;
      }
    }
    if(flag){
      cout<<"TRUE"<<endl;
    }
    else {
      cout<<"FALSE"<<endl;
    }

    return 0;
}