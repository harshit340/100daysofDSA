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
        long long int n,x; 
        cin >> n >>x;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        } 
      
        ll temp;
        for(ll i=0;i<n;i++){
            if(arr[i]%x!=0){
                temp = i;
                break;
            }
        } 
        
        ll summax = 0;
        ll range= 0;
        ll summini = 0;
        for(ll i=0;i<n;i++){

            summax += (arr[i]+(x-1))/x;
            
            if(i>=temp){
                range= range+ arr[i];
            }

            if(i<temp){
                summini = summini + (arr[i]+(x-1))/x; 
            }
        }

        

        cout<<summini+((range+(x-1))/x)<<" "<<summax<<endl;

    } 
    return 0; 
} 
