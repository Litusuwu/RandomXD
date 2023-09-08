#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define ll long long

void solve(){
    ll t, ans, valor;

    cin>>t;
    
    vector<int>starbucks;

    for(int i=0; i<t; i++){
        cin>>valor;
        starbucks.push_back(valor);
    } 
    ans=starbucks.front();
    for(int k=0; k<t; k++){
        ans &= starbucks[k];
    }
    cout<<ans<<'\n';


}


int main()
{
	daysi;
    campos;
    int time;
    cin>>time;
    while(time--){
        solve();
    }
    
	return 0;
}