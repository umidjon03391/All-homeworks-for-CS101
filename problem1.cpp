#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int son=n;

    while (n>0){
        for(int i=1; i<=n; i++) {
            cout<<i;
        }
        for(int i=1; i<=2*(son-n); i++) {
            cout<<" ";
        }
        for(int i=n; i>=1; i--) {
            cout<<i;
        }
        cout << endl;
        n=n-1;
    }
}