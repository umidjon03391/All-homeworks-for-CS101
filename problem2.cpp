#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while (n>0) {
        string son;
        cin>>son;
        for(int i=(son.length()); i>=1;i--) {
            cout<<son[i-1]<<" ";
        }
        cout<<endl;
        n=n-1;
    }

}