#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define ll long long

void solve(){
    ll x, ans=0;

    cin>>x;
    if(x==0)cout<<"1";
    else{
        while(x>0){
            if((x&1)==0){
                ans++;
            }
            x>>=1;
        }
    
        cout<<(1LL<<ans);
    }
    


}


int main()
{
	daysi;
    campos;

    solve();
	return 0;
}