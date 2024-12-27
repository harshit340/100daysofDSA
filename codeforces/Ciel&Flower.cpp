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
    
        long long int r,g,b; 
        cin>>r>>g>>b;
        int count = 0;
       
        int min = min(r,min(b,g));
        for(int i=0; i<=2&&i<=min ; i++){
            int ans = 0;
            ans+=i;
            ans+=((r-i)/3);
            ans+=((g-i)/3);
            ans+=((b-i)/3);
            count = max(count,ans);
        }

        cout<<count<<endl;
   
    return 0; 
} 
