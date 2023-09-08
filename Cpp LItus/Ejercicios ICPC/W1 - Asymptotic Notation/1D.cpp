#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, d1, d2, d3, d4;
    cin>>a;
    for(int i=a+1; i<10000; i++){
        a=i;
        d1=a%10;
        a/=10;
        d2=a%10;
        a/=10;
        d3=a%10;
        a/=10;
        d4=a%10;
        if(d1!=d2 and d2!=d3 and d3!=d4 and d1!=d4 and d1!=d3 and d2!=d4){
            cout<<i;
            break;
        }
    }
    return 0;
}