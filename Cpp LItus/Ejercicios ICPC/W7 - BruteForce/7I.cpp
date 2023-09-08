#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define ll long long

void solve(int num){
    ll digitos, power, n, min, max;
    vector<ll>holi;
    cin>>digitos>>power;
    n=power2(power);
    
//    cout<<n<<"---";
//    cout<<(mypow(10, 17))<<endl;
    for(ll i=mypow(10, digitos-1); i<mypow(10, digitos); i++){
        //cout<<"a";
        if(mycheck(i) and i%n==0){
            holi.push_back(i);
        }
    }
    cout<<"Case "<<num<<": ";
    
    if(holi.size()==1)cout<<holi.front();
    else if(holi.size()>1)cout<<holi.front()<<" "<<holi.back();
    else cout<<"impossible";
    cout<<endl;
}

int main()
{
	daysi;
    campos;
    int time;
    cin>>time;
//    time=1;
    /*while(time--){
        solve();
    }*/
    for(int i=1; i<=time; i++){
   //     cout<<"a";
        solve(i);
    }
    /*time=time<<1;
    time=time<<1;
    time=time<<1;
    cout<<time;*/
	return 0;
}