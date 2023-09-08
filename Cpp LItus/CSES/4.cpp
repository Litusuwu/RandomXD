#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

typedef long long ll;

void solve(){
    ll time, ans=0, diff;
    cin>>time;
    vector<ll>pikachu(time, 0);
    for(int i=0; i<time; i++){
        cin>>pikachu[i];
    }
    for(int i=0; i<time-1; i++){
        if(pikachu[i]>pikachu[i+1]){
            diff=(pikachu[i]-pikachu[i+1]);
            pikachu[i+1]+=diff;
            ans+=diff;
        }
    }
    cout<<ans;
}


int main()
{
	daysi;
    campos;

    solve();
	return 0;
}