#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

typedef long long ll;

void solve(){
    vector<int>pikachu(4, 0);
    string palabra;
    char lastC='P', c;
    int ans=0, count=0;
    while(cin>>c){
        if(cin.eof())break;
        if(c!=lastC){
            ans=max(ans, count);
            count=0;
        }

        lastC=c;
        count++;
    }
    ans=max(ans, count);
    cout<<ans;
}


int main()
{
	daysi;
    campos;

    solve();
	return 0;
}