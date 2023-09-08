#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ,m ; 
    cin >> n >>  m ;
    int n_1 = 0;
    int n_0 = 0;
    vector<int>v(n);
    v[0] = 1;
    for(int i = 0; i < n; i++){
        int number ;
        cin >> number;
        if (number == 1){
            n_1++;
        }
        else {
            n_0++;
        }
        v[i] = number  + v[i - 1];
    }
    for(int i = 0 ; i < m ; i++){
        int j , l;
        cin >> j >> l;
        if (i == 0)
        {int sol;
        if(v[l] - v [j - 1] == 0 ) sol = 1;
        else sol = 0;
        cout << sol  << '\n';}
        else {
            if ((l-j+1)&1)cout << '0' << '\n';
            else {
                int mid = (l-j+1)/2;
                if (n_1>=mid and n_0>=mid){
                    cout << '1'<< '\n';
                }
                else {
                    cout << '0' << '\n';
                }
            }
        }
    }
    return 0;
}