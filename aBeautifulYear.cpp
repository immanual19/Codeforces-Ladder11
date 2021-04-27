#include <iostream>
#include<string>
using namespace std;

int main() {
    int result,count;
    bool condition=true;
    string year,strYear;
    cin>>year;
    result=stoi(year)+1;
    while(condition){
        strYear=to_string(result);
        count=0;
        for(int i=0;i<strYear.length();i++){
            for(int j=i+1;j<strYear.length();j++){
                if(strYear[i]==strYear[j]){
                    count++;
                }
            }
        }
        
        if(count==0){
            cout<<strYear<<endl;
            condition=false;
           
        }
        else{
            
            result++;
            condition=true;
        }
    }
    
    return 0;
}
