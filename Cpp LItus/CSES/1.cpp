#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

typedef long long ll;

void solve(){
    ll n;
    cin>>n;  
    while(n!=1){
        cout<<n<<" ";
        if(n&1){
            n=(3*n)+1;
        }
        else{
            n/=2;
        }
        cin>>n;
    }
    cout<<n;
}


int main()
{
	daysi;
    campos;

    solve();
	return 0;
}