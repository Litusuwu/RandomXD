#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
typedef long long ll;


void solve(){
    ll numero, resi, ans;
    cin>>numero;
    ans=numero;
    while(numero>0){
        resi=numero%10;
        numero/=10;
        
        
        if(resi>0 and ans%resi!=0){
            ans++;
            numero=ans;
        }
    }
    cout<<ans<<endl;
}

int main()
{
	daysi;
    campos;
    ll time;
    
    cin>>time;
    while(time--){
        solve();
    }
    
	return 0;
}