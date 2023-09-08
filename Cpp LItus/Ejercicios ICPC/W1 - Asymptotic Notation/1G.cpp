#include <bits/stdc++.h>
using namespace std;
int main(){
    long long time,contador=0, v;
    cin>>time;
    while(time!=0){
        v=time%10;
        if(v==4 or v==7)contador++;
        time/=10;
    }
    if(contador==4 or contador==7)cout<<"YES";
    else cout<<"NO";
    return 0;
}