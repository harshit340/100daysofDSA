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
        vector<int>arr(N);
        for(int i = 0 ;i<N;i++){
            cin>>arr[i];
        }

        sort(arr.begin() , arr.end());

        int a1 = arr[0];
        int a2 = arr[N-2];
        int a3 = arr[1];
        int a4 = arr[N-1];

        ll ans = (abs(a1 - a2)+abs(a2 - a3)+abs(a3 - a4)+abs(a4 - a1));
    
       cout<<ans<<endl;
    } 

    return 0; 
} 
