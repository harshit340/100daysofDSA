/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 

#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
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
    
        long long int N; 
        cin >> N; 
        int arr[N];
        int min = INT_MAX;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }

        for(int i=0 ;i<N;i++){
            if(arr[i]<0){
                arr[i]=arr[i]*-1;
            }
             if(arr[i]<min){
              min=arr[i];
             
            }
        }
      
        if(min<0){
            min= min*-1;
        }

        cout<<min<<"\n";

        
    
    return 0; 
} 
