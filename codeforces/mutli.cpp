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
    
        long long int A , B; 
        cin >> A >> B;

        if(A%B==0 || B%A==0){
            cout<<"Multiples"<<endl;
        } 
        else {
            cout<<"No Multiples"<<endl;
        }
    
    return 0; 
} 
