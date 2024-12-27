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

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
        long long int n , k; 
        cin >> n >> k;

        ll arr[n];
        for(ll i=0; i<n ;i++){
            cin>>arr[i];
        } 

        for(ll i = 0 ;i<n ;i++){
            if(arr[i]%k == 0){
                arr[i] = 0;
            }else{
                ll temp = arr[i]%k;
                temp = temp - k;
                arr[i] = temp;
            }
        }
       vector<pi> we;
        for(ll i=0;i<n ; i++){
            ll x = arr[i];
            ll y = i;

            we.push_back(make_pair(x,y));
            
        }

        sort(we.begin(), we.end(), [](const pi &a, const pi &b) {
            return a.F > b.F || (a.F == b.F && a.S < b.S);
        });

        for(ll i=0; i<n ;i++){
            cout<<we[i].S +1 << " ";
        }
         cout<<endl;

    } 
    return 0; 
} 
