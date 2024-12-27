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

bool checker(int n){
    int count = 0 ;
    while(n>0){
        int digit = n%10;
        if(digit != 0){
            count++;
        }
            if (count > 1) {
                return false; // Early exit if more than one non-zero digit found
            }

        n = n/10;
    }

  return count == 1;
}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
        long long int N; 
        cin >> N; 
      int count = 0 ;
        for(int i = 1 ; i<=N ; i++){
            if(checker(i)){
                count++;
            }
        }

        cout<<count<<endl;
    } 
    return 0; 
} 
