#include <string>
#include <iostream>
using namespace std;

int main() {
    string letter;
    int lowerCount=0,upperCount=0;

    cin>>letter;
    
    for(int i=0;i<letter.length();i++){
        if(letter[i]>='A' && letter[i]<='Z'){
            upperCount++;
        }
        else{
            lowerCount++;
        }
    }
    if(lowerCount>=upperCount){
        for (auto & c: letter) c = tolower(c);
    }
    else{
        for (auto & c: letter) c = toupper(c);
    }
    cout<<letter<<endl;
    return 0;
}
