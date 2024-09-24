#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float n,x;
    cin>>n>>x;
    if (n<=2) {
        cout<<"1";
    }else {
        int s;
        s=ceil((n-2)/x);
        cout<<s+1;
    }

}