#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
typedef long long ll;

void solve(){
    int m, n, ans=0, num;
    bool flag;
    set<int>right, left;
    string bsv;
    cin>>n>>bsv;
    if(bsv.size() & 1 or bsv[0]==')') cout<<":(";
    else{
        flag=true;
        bsv[0]='(';
        for(int i = 1 ; i < bsv.size(); i++){
            if(bsv[i]=='?'){
                if((i&1)){
                    bsv[i]=')';
                }
                else{
                    bsv[i]='(';
                }
            }
            /*if(bsv[i]==')' and i&1 ){
                if(i == bsv.size()-2)continue;
                cout <<  ":(";
                return ;

            }*/
            if(bsv[i]=='(' and !(i&1) ){
                cout <<  ":(";
                return;
            }
        }
        for(auto l : bsv) cout <<l; 
    }
    return;
}
int main()
{
    daysi;
    campos;
    solve();
    return 0;
}