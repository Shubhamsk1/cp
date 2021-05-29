#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    string s;
    for(int c = 1; c <= t; ++c){
        cin >> s;
        cout <<"Case #" << c <<": ";
        int cnt = 0;
        for(int i = 0; i < s.size(); ++i){
            int x = s[i] - '0';
            for(; cnt < x; ++cnt)cout << '(';
            for(; cnt > x; --cnt)cout << ')';
            cout << x;
        }
        for(; cnt > 0; --cnt)cout << ')';
        cout << '\n';
    }
    return 0;
}