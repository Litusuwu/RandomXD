#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long

void solve(){
    string pinga, ans;
    bool valor;
    while(true){
        cin>>pinga;
        ans=pinga;
        if(pinga=="#")break;
        valor=next_permutation(pinga.begin(), pinga.end());
        
        if(!valor) cout<<"No Successor";
        else cout<<pinga;

        cout<<endl;
    }
       

}

int main()
{
	daysi;
    campos;
    int time;
//    cin>>time;
    time=1;
    while(time--){
        solve();
    }
    
	return 0;
}