#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

void solve(){
    map<long long, long long> precios_anho;
    vector<long long>prices;
    long long time, num, anho=0,  ran;
    long long ans=10000000000000000;
    cin>>time;
    while(time--){
        cin>>num;
        precios_anho.insert({num, anho});
        prices.push_back(num);
        anho++;
    }
    sort(prices.begin(), prices.end());
    for(long long i=1; i<prices.size(); i++){
        ran=prices[i]-prices[i-1];
       // cout<<"----"<<ran<<" = "<< precios_anho[prices[i]]<<" - "<<precios_anho[prices[i-1]]<<endl;
        if(precios_anho[prices[i]]<precios_anho[prices[i-1]] and ran<ans and ran>0)ans=ran;
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