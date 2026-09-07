#include <bits/stdc++.h>
using namespace std;

int main(){

    string input;
    cin>>input;

    int low=0,up =0;
    
    for(char c : input){
        if(isalpha(c)){
            if( c >='a' && c <= 'z' )
                low |= ( 1 << ( c - 'a' ));   //using bitwise OR.

            else if(c >= 'A' && c <= 'Z')
                up |= (1 << ( c-'A' ));    //using bitwise OR.
        }

    }
    if(low == up && low == (1 << 26) - 1)   //if both low and up are equal and they are equal to 2^26 - 1, then the string is a pangram.
        cout<<"Yes, the string is a pangram."<<endl;
    else
        cout<<"No, the string is not a pangram."<<endl;
  

    return 0;
}