#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int n, razon, ans=0, num;
    map<int, int> mapita;
    vector<int>sadasdas;
    cin>>n>>razon;
    for(int i=0; i<n; i++){
        cin>>num;
        sadasdas.push_back(num);
    }
    sort(sadasdas.begin(), sadasdas.end());
    for(int i=0; i<n; i++){
        if(sadasdas[i]%razon!=0 or !mapita[sadasdas[i]/razon]){
            mapita[sadasdas[i]]=1;
            ans++;
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