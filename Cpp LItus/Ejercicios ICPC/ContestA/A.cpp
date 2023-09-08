#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
typedef long long ll;


void solve(){
    ll n,pinga,cambio50=0, cambio25=0, cambio100=0, ans=0;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>pinga;
        switch(pinga){
            case 25:
                cambio25++;
                break;
            case 50:
                cambio50++;
                if(cambio25>=1)cambio25--;
                else ans++;

                break;
            case 100:
                cambio100++;
                if(cambio25>=1 and cambio50>=1){
                    cambio25--;
                    cambio50--;
                }
                else if(cambio25>=3){
                    cambio25-=3;
                }
                else{
                    ans++;
                } 
                break;
        }
    }
    cout<<(ans==0? "YES" : "NO")<<endl;

}

int main()
{
	daysi;
    campos;
    ll time;
    
    time=1;
    while(time--){
        solve();
    }
    
	return 0;
}