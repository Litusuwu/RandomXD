#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long

void solve(){
    string cola1;
    multiset<char>ans;
    char time, maxChar='a';
    cin>>cola1;
    for (int i = 0; i < cola1.size(); i++)
    {
       time=cola1[i];
       ans.insert(time);
     //  cout<<time;
       if(maxChar<time)maxChar=time;
    }
    /*for (int i = 0; i < cola1.size(); i++)
    {
       time=cola1[i];
       ans.erase(time);
    }*/
    for(int k=0; k<ans.count(maxChar); k++)cout<<maxChar;

}

int main()
{
	daysi;
    campos;

    solve();
	return 0;
}