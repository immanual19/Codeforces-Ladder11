#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,m,count,nextPrime=-1;
    cin>>n>>m;
    
    for(int i=n+1;i<=m;i++){
        count=0;
        for(int j=2;j<=sqrt(m);j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            nextPrime=i;
            break;
        }
    }
    
    if(nextPrime==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
