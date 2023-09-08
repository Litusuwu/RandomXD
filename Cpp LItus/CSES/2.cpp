#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

typedef long long ll;

void solve(){
    ll n, ans=0, a;
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>a;
        ans+=a;
    }
    cout<<(((n*(n+1))/2)-ans);
}


int main()
{
	daysi;
    campos;

    solve();
	return 0;
}