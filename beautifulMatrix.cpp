#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int i,j,arr[5][5],move=0;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j];
            
            if(arr[i][j]==1){
                move=abs(3-(i+1))+abs(3-(j+1));
            }

        }
    }
    
    
    cout<<move<<endl;
    
    return 0;
}
