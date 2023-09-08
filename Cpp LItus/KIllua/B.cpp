#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long

void solve(){
    lar a, b, c, d, ans, suma=0;
    cin>>a>>b;
    vector<int>pikachu;
    for(int i = 0 ; i < a; i++){
        cin>>c>>d;
        suma+=d;
        pikachu.push_back((c-d));
    }
    sort(pikachu.begin(), pikachu.end());
    ans=a;
    if(suma>b){
        cout<<-1;
        return;
    }
    else {
        for(int j = 0 ; j < a ; j++){
            if(pikachu[j] + suma <=b){
                suma+=pikachu[j];
                ans--;
            }
            else{
                break;
            }
        }
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