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
        long long int n , k; 
        cin >> n>>k;
        string str;
        cin>>str;
        int arr[26] = {0};
        
        for(int i = 0 ; i < str.size() ;i++){
            int index = str[i] - 'a';
            arr[index]++;
        }

        int oddcount = 0;
        for(int i =0 ; i<26 ;i++){
            if(arr[i]%2!=0){
                oddcount++;
            }
        }

        if(oddcount > k+1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    } 
    return 0; 
} 
