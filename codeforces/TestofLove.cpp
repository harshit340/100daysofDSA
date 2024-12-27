/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1000000007

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
    while (T--)
    {
        long long int n, m, k;
        cin >> n >> m >> k;
        string arr;
        cin >> arr;
        bool ans = false;
        int swim = k;
        for (int i = -1; i < n; i++)
        {


            if(i+m >=n && (arr[i] == 'L' or i==-1)){
                break;
            }

          int jump = i;

          for(int j = 1 ; j<=m ; j++ ){
              if((arr[j]=='L' or i==-1) && (arr[i+j]=='L')){
                jump = j+i;
              }
          }
          int jump1 = i; 
          for(int j = 1 ; j<=m ; j++ ){
              if((arr[j]=='L' or i==-1) && (arr[i+j]=='W')){
                jump1 = j+i;
              }
          }

          if(jump==i){
            if(jump1==i){
                if(arr[i]=='W' and k>=1){
                    k--;
                }else{
                    ans = true;
                    break;
                }
            }else{
                if(k>=1){
                    i = jump1;
                    k--;
                }else{
                    ans= true;
                    break;
                }
            }
          }else{
            i = jump-1;
          }
        }

        if(ans){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
