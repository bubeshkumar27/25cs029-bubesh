#include <bits/stdc++.h>
using namespace std;

int main(){

    string input;
    cin>>input;

    int count =0;
    
    for(char c : input){
        if(isdigit(c) && c >= '0' && c <= '9'){
            count |= (1 << (c - '0'));   //using bitwise OR.
        }
    }
    if(count == (1 << 10) - 1)   //if count is equal to 2^10 - 1.
        cout<<"Yes, the string contains all digits from 0 to 9."<<endl;

    else
        cout<<"No, the string does not contain all digits from 0 to 9."<<endl;

        
    return 0;
}
