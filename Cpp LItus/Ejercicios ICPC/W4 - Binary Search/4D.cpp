#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int ingredientes, polvo, num=0,resta, ans=0;
    vector<int>v1, v2, v3;
    cin>>ingredientes>>polvo;
    for(int i=0; i<ingredientes;i++){
        cin>>num;
        v1.push_back(num);
    }
    for(int i=0; i<ingredientes; i++){
        cin>>num;
        v2.push_back(num);
    }
    
    while(polvo>0){
        for(int i=0; i<ingredientes; i++){
            v2[i]-=v1[i];
            while(v2[i]<0 and polvo>=0){
                polvo--;
                v2[i]++;
            }
        }
        if(polvo>=0)ans++;
    }
    //rellenar arena
    cout<<ans;
}

int main()
{
	daysi;
    campos;

    solve();
	return 0;
}