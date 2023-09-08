#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    vector<pair<int,int>>humildad;
    long long razon, n, tam, a, b, j=0, inicio, fin, suma=0, ans=0;
    cin>>n>>razon;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        humildad.push_back(make_pair(a, b));
    }
    sort(humildad.begin(), humildad.end());
   
   // for(int i=0; i<n; i++)cout<<humildad[i].first<<" "<<humildad[i].second<<endl;
    for(int i=0; i<n and j<n; i++){
        suma+=humildad[i].second;
        while(humildad[i].first - humildad[j].first >= razon){
            suma-=humildad[j].second;
            j++;
        }
        
        ans=max(suma, ans);
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