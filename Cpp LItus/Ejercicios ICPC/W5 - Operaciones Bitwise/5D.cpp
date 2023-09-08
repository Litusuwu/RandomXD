#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int GetBit(int n, int i) {
    return ((n >> i) & 1);
}

void solve()
{
    ll n, l, r, x, num, ans=0, ver=0;
    cin>>n>>l>>r>>x;

    vector<ll>pikachu;
    vector<ll>raichu;
    for(int i=0; i<n; i++){
        cin>>num;
        pikachu.push_back(num);
    }

    for(ll mask=0; mask<(1<<n); mask++){
        for(int bit=0; bit<n; bit++){
            if((1<<bit)& mask){
                ver+=pikachu[bit];
                raichu.push_back(pikachu[bit]);
            }
        }
        //<< max_element(raichu.begin(), raichu.end())<< " "<<min_element(raichu.begin(), raichu.end())<<endl;
        if(ver<=r 
            and ver>=l 
            and ((*max_element(raichu.begin(), raichu.end()))-(*min_element(raichu.begin(),raichu.end())))>=x){
                    ans++;
                }
        ver=0;
        raichu.clear();
    }
    
    cout<<ans;
}

int main()
{
    solve();    
    return 0;
}