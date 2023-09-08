#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

typedef long long ll;
typedef unsigned long long int megalong;


void solve(){
    ll x,y, alm,ans;
    cin>>x>>y;
    if((x&1 and y<=x) or (y&1 and x<=y)){
        swap(x, y);
    }
    if(x>=y){
        ans=(x*x)-(y-1); 
    }
    else{
        ans=((y-1)*(y-1))+x;
    }
    cout<<ans<<endl;
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