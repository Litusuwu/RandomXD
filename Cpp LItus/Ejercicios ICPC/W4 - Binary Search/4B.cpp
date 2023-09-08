#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int n, k, num;
    bool flag=false;
    vector<int>jax;
    cin>>n>>k;
    while(n--){
        cin>>num;
        jax.insert(lower_bound(jax.begin(), jax.end(), num), num);
    }
    
    double ans, ansR;
    for(int i=0; i<jax.size();i++){
        
        
        if(i==0){
            int a=jax[0];
            int b=(k-jax.back());
            ans=max(a , b );
        }
        else{
            ansR=(jax[i]-jax[i-1])/2.0;
            
            if(ansR>ans and ansR!=0){
                flag=true;
                ans=ansR;
            }
        } 
    }
    if(flag)printf("%.10lf", ans);
    else printf("%.10lf", ans);
}

int main()
{
	daysi;
    campos;

    solve();
	return 0;
}