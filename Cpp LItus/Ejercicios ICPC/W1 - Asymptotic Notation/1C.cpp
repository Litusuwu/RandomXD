#include <iostream>
using namespace std;
int main(){
    long long a, b, i;
    cin>>a>>b;
    for(i=0; a<=b; i++){
        a*=3;
        b*=2;
    }
    cout<<i;
    return 0;
}