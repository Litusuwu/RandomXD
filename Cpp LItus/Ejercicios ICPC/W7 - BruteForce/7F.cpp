#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long

void solve(){
    int a, b, c, ans=0;
    cin>>a>>b>>c;
    ans=max((a+b+c),ans);
    ans=max((a+b*c),ans);
    ans=max((a*b+c),ans);
    ans=max((a*b*c),ans);
    ans=max(((a+b)*c),ans);
    ans=max((a*(b+c)),ans);
    cout<<ans;
}

int main()
{
	daysi;
    campos;
    int time;
    cin>>time;
    while(time--){
        
    }
    solve();
	return 0;
}