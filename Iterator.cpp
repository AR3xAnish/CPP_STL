#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    };
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";
    return 0;
}