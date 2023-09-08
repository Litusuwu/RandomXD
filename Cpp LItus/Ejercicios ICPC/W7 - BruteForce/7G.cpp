#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long

void solve(){
    int t, n, ans,ans1=0, valor;
    vector<int>platos, resultados2;
    set<int>variables, resultados;
    cin>>t;
    while(t--){
        cin>>valor;
        platos.push_back(valor);
        variables.insert(valor);
    }
    vector<int>platos2(variables.begin(), variables.end());

    for(int i=0; i<platos2.size(); i++){
        n=platos2[i];
        
//        cout<<n<<"<--- ";
        for(int j=0; j<platos.size(); j++){
            if(n==platos[j]){
                ans1++;
                j++;
            }
        } 
        if(i==0){
            resultados2.push_back(n);
            ans=ans1;
        }
        else if(ans1>ans){
            ans=ans1;
            resultados2.push_back(n);
        }
        ans1=0;
    }

    cout<<resultados2[resultados2.size()-1]<<endl;
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