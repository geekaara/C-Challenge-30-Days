#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Which Multiplication table you want?"<<endl;
    cin>>n;
    for(int i=1;i<11;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}