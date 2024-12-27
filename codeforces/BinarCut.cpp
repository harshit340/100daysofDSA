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
        string str;
        cin>>str;
        int count = 1;
        bool ans = false;
        for(int i = 0 ; i<str.size()-1 ; i++){
            if(str[i] != str[i+1]){
                count++;
            }

            if(str[i] == '0' && str[i+1] == '1'){
                ans = true;
            }
        }
        if(ans){
            cout<<count - 1<<endl;
        }else{
            cout<<count<<endl;
        }
    } 
    return 0; 
} 
