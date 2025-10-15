#include<bits/stdc++.h>
using namespace std;
string s; stack<char>stk;

void solve(){
    cin>>s;
    
    for(auto &c : s){
        if(stk.empty() && c!='>'){
            stk.push(c);
        }
        else{
            if(c=='<' && !stk.empty()){
                stk.pop();
            }
            else{
                stk.push(c);
            }
        }
    }
    
    
    vector<char>box;
    while(!stk.empty()){
        box.push_back(stk.top());
        stk.pop();
    }
    
    reverse(box.begin(),box.end());
    
    for(auto &c : box) cout<<c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
