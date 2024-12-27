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
        long long int n , k; 
        cin >> n >>k;
        ll arr[n*k];
        for(ll i=1; i <=n*k ; i++){
            cin>>arr[i];
        }
        ll sum = 0;
        
        ll x = ((n+1))/2 -1;
        ll total = n*k + 1;
        ll med = n-x;
       

        while(k--){
            
            total = total - med;
          
            if(total <= 0){
                break;
            }
              sum = sum + arr[total];
        }

        cout<<sum<<endl;
       
    } 
    return 0; 
} 
