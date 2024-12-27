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
        long long int n; 
        cin >> n; 
        int arr[n];

        for(int i = 0 ; i < n ; i ++){
            cin>>arr[i];
        }
        int ans = 0;
        int mani = INT_MAX;
        bool sorted = true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                sorted = false;
                break;
            }

        }

        if(!sorted){
            cout<<0<<endl;
            continue;
        }

        for(int i=1 ;i<n ;i++){
            if(arr[i-1] == arr[i]){
                ans = 1;
                break;
               
            }else if(arr[i-1]<arr[i]){
                mani = min(mani,(arr[i]-arr[i-1]));
                ans = mani/2;
                ans++;
            }
        }

        cout<<ans<<endl;

    } 
    return 0; 
} 


 /*    if(arr[n-2]==arr[n-1]){
            cout<<1<<endl;
        }else if(arr[n-2]<arr[n-1]){
            int ans = arr[n-1] - arr[n-2];
            ans = ans/2;
            cout<<ans+1<<endl;
        }else if(arr[n-2]>arr[n-1]){
            cout<<0<<endl;
        } */