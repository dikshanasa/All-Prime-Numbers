#include <iostream>
using namespace std;

int main(){
int n,chk=0;
    cin>>n;
for(int i=1;i<=n;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            chk++;
            break;
        }
    }
    if(chk==0 &&i!=1){
        cout<<i<<endl;
    }
    chk=0;
}
  
}


