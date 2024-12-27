/* username: Harshit Shrivastava (cf, cc, leetcode, atcoder) */

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
        long long int n; 
        cin >> n; 
        
       
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(2 * n);

        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        
        for (int i = 0; i < n; i++) {
            c[i] = a[i];
        }

        
        for (int i = 0; i < n; i++) {
            c[n + i] = b[i];                   
        }

      
        sort(c.begin() , c.end());

     

        int maxi = INT_MIN;
        int count = 1;
        for(int i=0 ; i<n ; i++){
            if(c[i] == c[i+1]){
                count++;
            }else{
                count = 1;
            }

            maxi = max(maxi , count);
        }

       
        cout<<maxi<<endl;
    } 
    return 0; 
}
