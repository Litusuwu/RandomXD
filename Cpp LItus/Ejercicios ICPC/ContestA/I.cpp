#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
typedef long long ll;


void solve(){
    ll tiempo, n1, n2, godllasi;
    
    //if(!(n2%2==0))flag=true;
    cin>>tiempo>>n1>>n2;

    for(int i = 0 ; i < tiempo; i++){
        cin>>godllasi;
        n1+=godllasi;
    }
    
    //cout<<((n1%2==0 and flag==false)? "Bob":((!(n1%2==0) and flag)? "Bob":"Alice"))<<endl;
    cout<<(((n1&1) == (n2&1))? "Alice":"Bob")<<endl;
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