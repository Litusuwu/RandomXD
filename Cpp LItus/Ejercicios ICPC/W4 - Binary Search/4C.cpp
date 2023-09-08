#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int n, k, num, suma=0, ans=0, preAns=0, j=0;
    vector<int>royal;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>num;
        royal.push_back(num);
    }
    for(int i=0; i<n; i++){
        suma+=royal[i];
        preAns++;
        
        while(suma>k){ 
            suma-=royal[j];
            j++;
            preAns--;
            
        }
        ans=max(preAns, ans);
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