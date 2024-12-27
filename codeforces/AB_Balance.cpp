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
        string arr;
        cin>>arr;
        int ABcount = 0;
        int BAcount = 0;

        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] == 'a' && arr[i+1] == 'b'){
               ABcount++;
            }else if(arr[i] == 'b' && arr[i+1] == 'a'){
                BAcount++;
            }

            if(ABcount != BAcount && i == arr.size()-2){
                if(ABcount>BAcount){
                    arr[i+1] = 'a';
                }else{
                    arr[i+1] = 'b';
                }
            }
        }

        cout<<arr<<endl;
    } 
    return 0; 
} 
