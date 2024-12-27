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
        cin >> str;
        int pair = -1 ;

        for(int i = 1 ; i<str.size() ; i++){
            if(str[i-1] == str[i]){
                pair = i;
                break;
            }
        }
        
        char newele ;
 
        if(pair == -1){
            if(str[0]!= 'a'){
                newele = str[0] -1;
            }else{
                newele = str[0] +1;
            }
            
            str.insert(str.begin()  , newele);
            
        }else{
             if(str[pair] != 'a'){
                newele = str[pair] -1;
             }else{
                newele = str[0] +1;
             }
             str.insert(str.begin() + pair , newele);
        }
        

        for(int i =0 ; i<str.size() ;i++){
          cout<<str[i];
        }
        cout<<endl;
    } 
    return 0; 
} 
