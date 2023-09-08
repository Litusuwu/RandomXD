#include <iostream>
using namespace std;

void Funny(int n){
    if(n<=0)return;
    cout<<n<<" ";
    Funny(n-1);
    Funny(n-2);
    cout<<n<<" ";
}

int main(){
    int n=5;
    Funny(n);
}