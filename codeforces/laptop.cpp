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
   
      
   ll n,x,y,flag=0;
     cin >> n; 
     vector<pair<int, int>> pair;
     for(int i=0;i<n ; i++){
        cin>>x>>y;
        pair.pb(make_pair(x,y));
     }

     sort(pair.begin() , pair.end());

     for(int i=0; i<n-1 ; i++){
        if(pair[i].S > pair[i+1].S){
            flag = 0 ;
            break;
        }
     }
     if(flag==1){
        cout<<"Poor Alex"<<endl;
     }
 
    return 0; 
} 

