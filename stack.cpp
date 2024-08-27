#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    for(int i=1;i<=10;i++){
        st.push(i);
    };
    for(int i=1;i<=10;i++){
        cout<<st.top()<<"\n";
        st.pop();
    }
}