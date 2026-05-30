#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mn = *min_element(a.begin(),a.end());
        int mx = *max_element(a.begin(),a.end());
        int ans = (mx - mn + 1)/2;
        cout<<ans<<endl;
    
    }
    return 0;
    
}
