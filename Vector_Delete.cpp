#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    cout<<"given vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    };
    cout<<endl;
    v.erase(v.begin()+1,v.end()-1);
    cout<<"updated vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    };
    return 0;
}