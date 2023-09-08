#include <bits/stdc++.h>
using namespace std;
int main(){
    long long time, pol=0, cri=0, n;
    cin>>time;
    while(time--){
        cin>>n;
        if(pol==0 and n<0)cri++;
        else if(n>0)pol+=n;
        else if(pol>0 and n<0)pol--;
    }
    cout<<cri;
    return 0;
}