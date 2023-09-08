#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
typedef long long ll;


void solve(){
    ll n,p, guanira, alphallasi, betallasi;
    vector<int>pikachu;
    map<int, int>charizard, blastoise;
    
    cin>>n>>p;
    for(int i = 0 ; i < n ; i++){
        cin>>guanira;
        pikachu.push_back(guanira);
        if(charizard.count(guanira)==0)charizard[guanira]=i;
        else blastoise[guanira]=i;
    }
    for(int i = 0 ; i < p; i++){
        cin>>alphallasi>>betallasi;
        
        if(!(charizard.count(alphallasi)==0 or charizard.count(betallasi)==0)){
            cout<<((charizard[betallasi]>charizard[alphallasi] or blastoise[betallasi]>charizard[alphallasi])? "YES": "NO")<<endl;
            
        }
        else{
            cout<<"NO"<<endl;
        }

    }

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