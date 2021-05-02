#include <iostream>
using namespace std;

int main(){
    int n;
    int c=0;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            c++;
            cout<<c<<" ";
        }
        cout<<endl;
        c = 0;
    }

}
