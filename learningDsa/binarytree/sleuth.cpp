#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    int flag=0;
    getline(cin,s,'?');
    int i=s.size()-1;
    while(s[i]==' '){
        i--;
    }
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'
        ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            cout<<"YES";
    }
    else    cout<<"NO";


}