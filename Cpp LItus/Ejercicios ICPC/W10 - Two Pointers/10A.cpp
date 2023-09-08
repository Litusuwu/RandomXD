#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int time, ans=0,k, maxAns=0, j=0, p;
    cin>>time;
    vector<int>goku(time);
    map<int, int>gohan;
    
    for(int i=0; i<time; i++){
        cin>>goku[i];
        gohan[goku[i]]=0;
    }
   
    for(int i=0; i<time; i++){
        gohan[goku[i]]++;
        maxAns++;
        while(gohan[goku[i]]>1){
            gohan[goku[j]]--;
            j++;
            maxAns--;
        }
        ans=max(ans, maxAns);
    }
    cout<<ans;
    
    
    /*for(int i=0; i<time; i++){
        p=gohan.find(goku[i]);
        cout<<p<<endl; 
        ans=max(ans, maxAns);
        while(goten[goku[i]]>1){
            goten[goku[j]]--;
            j++;
            maxAns--;
        }
        maxAns++;
        goten[goku[i]]++;
    }
    cout<<ans;*/
}


int main()
{
	daysi;
    campos;

    solve();
	return 0;
}