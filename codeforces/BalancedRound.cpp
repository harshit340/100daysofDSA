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
        long long int n,k; 
        cin >> n>>k;
        vector<int>arr(n);
        for(int i=0;i<n ;i++){
            cin>>arr[i];
        }
        int count=1;

        sort(arr.begin(),arr.end());
         int maxi =1;
        for(int i=0;i<n-1;i++){
         if(abs(arr[i]-arr[i+1]) <= k){
            count++;
         }else{
            count=1;
         }

         maxi = max(maxi,count);
        }


      int ans = n - maxi;
       
        cout<<ans<<endl;

    } 
    return 0; 
} 
