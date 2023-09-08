#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (long long i = 0; i < n; ++i)
#define REP(i,k,n) for (long long i = k; i <n; ++i)
#define REPR(i,k,n) for (long long i = k; i >= n; --i)
#define F first
#define S second

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;


void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> dif;
    ll suma=0;
    rep (i,n){
        ll ai,bi;
        cin>>ai>>bi;
        suma+=ai;
        dif.push_back(ai-bi);
    }
    sort(dif.begin(),dif.end());
    //for(auto it:dif)cout<<it<<" ";
    ll counter=0;
    bool bandera=false;
    REPR(i,n-1,0){
        if(suma<=m){
            bandera=true;
            break;
        } 
        cout<<dif[i];
        suma-=dif[i];
        counter++;
    }
    if(bandera) cout<<counter<<endl;
    else cout<<-1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--){
        solve();
    }

    return 0;
}