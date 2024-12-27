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
        long long int a,b,c; 
        cin >> a>>b>>c; 
        int count = 0;
        while(count<5){
           int mini = min(a,min(b,c));
           int maxi = max(a,max(b,c));
            if(mini == a){
                
            mini++;
             a =mini;
            }else if(mini == b){
             mini++;
             b =mini;
            }else if(mini == c){
                mini++;
                c =mini;
            }

            count++;
            


        }

        cout<<(a*b*c)<<endl;
    } 
    return 0; 
} 
