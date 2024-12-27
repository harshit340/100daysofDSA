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
        long long int x,k; 
        cin >> x >> k;
        int temp = x;
        int count= 0 ;
       
        
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
        }
    }
    return 0; 
} 















/*   else{
            for(int i = x ;i>=1 ; i--){
           
           if(i%k==0){
            continue;
           }else{
            if(i<=temp){
                temp = temp - i; 
                v.push_back(i);
                count++;
            if(temp==0){
                break;
            }
            }
            else
            {
                continue;
            }
           
           }
        } */