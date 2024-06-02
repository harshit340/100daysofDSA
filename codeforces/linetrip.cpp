/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a)  // 1. Avoid shadowing the standard library functions. Use std::max.
#define min(a, b) ((a > b) ? b : a) // 1. Avoid shadowing the standard library functions. Use std::min.
#define mod 1000000007 
#define for(a, c) for (int(a) = 0; (a) < (c); (a)++) // 2. Unnecessary macro, potentially confusing.
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) // 2. Unnecessary macro, potentially confusing.
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) // 2. Unnecessary macro, potentially confusing.
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
        int n , x;
        cin >> n >> x;

        
        int arr[n];
        for(i,n) {  
            cin >> arr[i];
        } 

        int last = 0;  
        int ans = INT_MIN;  
         for(i,n){  
            ans = max(ans, arr[i] - last);
            last = arr[i];
        }

        ans = max(ans, 2 * (x - last)); 
        cout << ans<<"\n";  
    } 
    return 0; 
} 
