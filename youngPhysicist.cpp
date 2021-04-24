#include <iostream>
using namespace std;
int main() {
    int n,x,y,z,sumX=0,sumY=0,sumZ=0;
    cin>>n;
    
    if(n>=1 && n<=100){
        for(int i=0;i<n;i++){
            cin>>x>>y>>z;
            if((x>=-100 && x<=100)&&(y>=-100 && y<=100)&&(z>=-100 && z<=100)){
                sumX=sumX+x;
                sumY=sumY+y;
                sumZ=sumZ+z;
            }
        }
        if(sumX==0 && sumY==0 && sumZ==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
}
