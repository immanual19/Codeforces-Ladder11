#include <string>
#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main() {
    string word;
    char c;
    cin>>word;
    
    if(word[0]>='a' || word[0]<='z'){
        c=toupper(word[0]);
        word[0]=c;
        cout<<word<<endl;
    }
    else{
        cout<<word<<endl;
    }
    
    return 0;
}
