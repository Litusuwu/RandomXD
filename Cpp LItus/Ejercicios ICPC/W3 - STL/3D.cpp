#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

void solve(){
    vector<int>burgos;
    multiset<int>burguitos;
    int num, count, zzz;
    while(cin>>num){
        auto it=find(burgos.begin(), burgos.end(), num);
        if(it==burgos.end())burgos.push_back(num);
        burguitos.insert(num);
    }
    zzz=burgos.size();
    while(zzz--){
        num=burgos.front();
        count=burguitos.count(num);
        cout<<num<<" "<<count<<endl;
        auto it=burgos.begin();
        burgos.erase(it);
    }
}

int main()
{
	daysi;
    campos;
    solve();
	return 0;
}