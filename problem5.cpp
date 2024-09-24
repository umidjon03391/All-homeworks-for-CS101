#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while (n>0) {
        if (i%10==3 or i%3==0) {
            i=i+1;
        }else {
            i=i+1;
            n=n-1;
        }
    }
    cout<<i-1;

}
