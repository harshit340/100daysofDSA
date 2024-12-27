/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 

#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define pb push_back 
#define pob pop_back 
#define mp make_pair 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
        long long int N; 
        cin >> N; 
        vi arr(N);
        vi nas(N);

        for(ll i = 0 ;i<N ; i++){
            cin>>arr[i];
        }
        ll l = 0 , r =0;
        bool ans = true;
        for(ll i=0 ; i<N ;i++){
           nas[i] = i+1;
        }

        while(r<N){
            while(r<N-1 and arr[r] == arr[r+1]){
                ++r;
            }

            if(l == r){
                ans = false;
            }else{
                rotate(nas.begin() + l , nas.begin() + r , nas.begin() + r + 1);
            }
            l= r+1;
            ++r;
        }
         if (ans)
        {
            for (auto &x : nas)
                cout << x << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;


        

    } 
    return 0; 
} 
