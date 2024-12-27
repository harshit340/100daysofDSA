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
        ll n , q; 
        cin >> n >> q;
        vector<int> arr(n);
        vector<long long int> pre(n+1,0);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
      
       for(int i=1 ; i<=n ;i++){
         pre[i] = pre[i - 1] + arr[i-1];
       }

        for(ll i=0;i<q;i++){
            ll l , r , k;
            cin>> l >> r >> k;

            ll ans = pre[n]-(pre[r]-pre[l-1]) + k*(r-l+1);

            if(ans%2 == 1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        } 
    } 
    return 0; 
} 
