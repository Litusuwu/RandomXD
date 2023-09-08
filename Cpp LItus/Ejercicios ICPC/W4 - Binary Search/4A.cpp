#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int time, num, numRef;
    vector<int>yisusman;
    cin>>time;
    for(int i=0; i<time; i++){
        cin>>num;
        if(i==0){
            yisusman.push_back(num);
        }
        else{
            numRef= yisusman.back();
            yisusman.push_back(num+numRef);
        }   
    }
    cin>>time;
    while(time--){
        cin>>num;
        cout<<(lower_bound(yisusman.begin(), yisusman.end(), num)-yisusman.begin()+1)<<endl;
    }

}

int main()
{
	daysi;
    campos;

    solve();
	return 0;
}