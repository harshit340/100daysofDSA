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
        long long int a ,b , c ; 
        cin >> a >> b >> c;

       int new_a = b-(c-b);
       int new_b = ((c-a)/2)+a;
       int new_c = a + 2*(b - a);

       if(new_c % c ==0 && new_c>=c && new_c != 0){
        cout<<"YES"<<endl;
        continue;
       }
       if(new_a % a ==0 && new_a>=a && new_a != 0){
        cout<<"YES"<<endl;
        continue;
       }
       if(new_b % b ==0 && (c-a)%2 == 0 && new_b>=b && new_b != 0){
        cout<<"YES"<<endl;
        continue;
       }

       cout<<"NO"<<endl;
    } 
    return 0; 
} 
