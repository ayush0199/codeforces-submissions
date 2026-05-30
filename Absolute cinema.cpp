
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long brr[n];
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>brr[i]){
                swap(arr[i],brr[i]);
            }
        }
        long long max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum = sum+arr[i];
        }
        cout<<max+sum<<endl;
    }
}
