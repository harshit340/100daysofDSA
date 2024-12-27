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
        string s;
        cin >> s;
        int count0 = 0;
        int count1 = 0;
        for(int i =0 ; i<s.size() ;i++){
            if(s[i] == '0'){
                count0 ++;
            }else{
                count1++;
            }
        } 

       
    
        int ans = 0;
        if(count0 == count1){
            cout<<0<<endl;
            continue;
        }


            for(int i = 0 ; i<s.size() ;i++){
            if(s[i] == '0'){
                count1--;
               if(count1<0){
                 ans = s.size() - i;
                 break;
               }
            }else{
                count0--;
                if(count0<0){
                 ans = s.size() - i;
                 break;
               }
            }
        }
        
 
        cout<<ans<<endl;
    } 
    return 0; 
} 
