/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 
#define for(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
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
    
    long long modulo = 1000000007;
   
         
        long long int x; 
        long long int y; 
        long long int n;
       
        cin>>x>>y;
        cin >> n ;
        if(n%6 == 1){
            cout<<(x%modulo + modulo)%modulo<<endl;
        } 

        if(n%6 == 2){
            cout<<(y%modulo + modulo)%modulo<<endl;
        } 

        if(n%6 == 3){
            cout<<((y-x)%modulo + modulo)%modulo<<endl;
        } 

        if(n%6 == 4){
            cout<<((-x)%modulo + modulo)%modulo<<endl;
        } 

        if(n%6 == 5){
            cout<<((-y)%modulo + modulo)%modulo<<endl;
        } 

        if(n%6 == 0){
            cout<<((x-y)%modulo + modulo)%modulo<<endl;
        } 
        

        
    
    return 0; 
} 
