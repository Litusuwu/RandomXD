#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)

typedef long long ll;



void solve(){
    int time, n;
    cin>>time;
    if(time==1)cout<<"1";
    else if(time==2 or time==3)cout<<"NO SOLUTION";
    else if(time==4){
        cout<<"2 4 1 3";
    }
    else if(time==5){
        cout<<"2 4 1 5 3";
    }
    else{
        deque<int>pikachu{2, 4, 1, 5, 3};
        n=6;
        while(n<=time){
            if(n&1)pikachu.push_front(n);
            else pikachu.push_back(n);
            n++;
        }
        for(auto it:pikachu)cout<<it<<" ";
    }
}


int main()
{
	daysi;
    campos;

    solve();
	return 0;
}