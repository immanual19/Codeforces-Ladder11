#include <iostream>
#include<string>
using namespace std;
int main(int argc, const char * argv[]) {
    string str,answer;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='.'){
            answer=answer+'0';
            
        }
        else if(str[i]=='-'){
            if(str[i+1]=='.'){
                answer=answer+'1';
                i++;
            }
            else{
                answer=answer+'2';
                i++;
            }
        }
    }
    cout<<answer<<endl;
    
    return 0;
}
