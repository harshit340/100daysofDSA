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
        ll maxi = -1;
        ll count = 0;

        if(N%2==1){
            cout<<1<<endl;
            continue;
        }
        if(N%3 !=0){
            cout<<2<<endl;
            
        }else{
             for(long long int i=1;i<=50;i++){
                if(N%i ==0){
                    count++;
                }else{
                    count=0;
                }
                maxi = max(maxi,count);
             }
             cout<<maxi<<endl;
        }

        
       
    } 
    return 0; 
} 
