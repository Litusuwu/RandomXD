#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int n,n2, k, numMax=0, ans=0,num, ran=0;
    queue<int>colita;
    queue<int>colita2;
    cin>>n>>k;
    n2=n;
    while(n--){
        cin>>num;
        colita.push(num);
    }
    n=n2;
    for(int i=0; i<n; i++){
        colita2=colita;
        while(true){
            if(k<(ran+colita2.front()) or colita2.empty() or i>=colita.size())break;
            numMax++;
            ran+=colita2.front();
            colita2.pop();
        }
        if(numMax>ans)ans=numMax;
        numMax=0;
        ran=0;
        colita.pop();
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