#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int time, ans=0,k,a,b, maxAns=0, j=0, p, diff;
    cin>>time>>a>>b; //minimo i-j = a osea a<
    vector<int>goku(time); 
    for(int i=0; i<time; i++){
        cin>>goku[i];
    }
   
    for(int i=0; i<time; i++){
        ans=max(maxAns, ans);
        maxAns+=goku[i];
        while((a<=i-j and i-j<=b)){
            maxAns-=goku[j];
            j++;
        }
        cout<<endl;   
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