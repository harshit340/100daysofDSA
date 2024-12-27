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
        ll N;
        cin>>N; 
       string s;
       string t;

       cin>>s;
       cin>>t;
       bool flag = true;
       for(int i =0 ; i < N && s[i]=='0'; i++){
        if(t[i] !='0'){
            flag = false;
          break;
        }
       }

      if(flag){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }

    } 
    return 0; 
} 
