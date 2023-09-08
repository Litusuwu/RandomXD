#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define ll long long

void solve(){
    int x, num, ans=0;
    cin>>num;
    while(num--){
        cin>>x;
        ans^=x;
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