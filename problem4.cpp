#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a%50==0) {
        cout<< 0 <<endl;
    }
    else {
        cout<<(50 - a%50)<<endl;
    }

    return 0;
}