/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 

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
        long long int a,b,n; 
        cin >>a>>b>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        } 

        long long int ans = b;
        

        for(long long int i=0;i<n;i++){
           /*  ans+=min(a-1,arr[i]); */
            ans+=min(arr[i]+1ll,a*1ll)-1;
            
        }

        cout<<ans<<endl;
    } 
    return 0; 
} 
