#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string str1,str2,str3;
    
    cin>>str1>>str2;
    
    for(int i=0;i<str1.length();i++){
        if(str1[i]=='1' && str2[i]=='1'){
            str3=str3+'0';
        }
        
        else if(str1[i]=='0' && str2[i]=='0'){
             str3=str3+'0';
        }
        
        else{
            str3=str3+'1';
        }
    }
    
    cout<<str3<<endl;
    
    return 0;
}
