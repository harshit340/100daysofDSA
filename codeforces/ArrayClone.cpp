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
        vector<ll>arr(N);
        for(ll i=0;i<N;i++){
            cin>>arr[i];
        }
         
        sort(arr.begin() , arr.end());

        ll count = 1;
        ll maxi = 0;
        for(ll i=0 ; i<N-1 ;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }else{
                count = 1;
            }
            maxi = max(maxi,count);
        }

       /*  cout<<"count - "<<maxi<<endl; */

        ll MN = N - maxi;
        /* cout<<"needed - "<<MN<<endl; */
        ll ans = 0;
        
        while(MN>0){
            ans++;
            int temp = min(MN,maxi);
            maxi+=maxi;
            MN-=temp;
            ans+=temp;
        }
        

        cout<<ans<<endl;

    } 
    return 0; 
} 
