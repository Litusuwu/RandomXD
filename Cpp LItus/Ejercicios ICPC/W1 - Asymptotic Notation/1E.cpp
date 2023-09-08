#include <bits/stdc++.h>
using namespace std;
int main(){
    long long time, a, p, pAC=100, ans=0;
    cin>>time;
    while(time--){
        cin>>a>>p;
        if(p<pAC){
            pAC=p;
        }
        ans+=(pAC*a);
    }
    cout<<ans;
    return 0;
}