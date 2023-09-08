#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

void solve(){
    multiset<int>teemo;
    int n, k, num, min1, min2, repl, ans=0;
    cin>>n>>k;
    while(n--){
        cin>>num;
        teemo.insert(num);
    }
    min1=*teemo.begin();
    while(min1<k){
        if(teemo.size()<2)break;
        teemo.erase(teemo.find(min1));
        min2=*teemo.begin();
        teemo.erase(teemo.find(min2));
        
        repl=min1+(2*min2);
        teemo.insert(repl);
        min1=*teemo.begin();
        ans++;
    }
    if(teemo.size()<2 and min1<k)cout<<"-1";
    else cout<<ans;
    
}

int main()
{
	daysi;
    campos;
    solve();
	return 0;
}