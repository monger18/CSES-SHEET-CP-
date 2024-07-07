#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n-1];
    for(long long i=0;i<n-1;i++){
        cin>>arr[i];
    }
    long long sum=0;
    for(long i=0;i<n-1;i++){
        sum+=arr[i];
    }
    long long totalsum=n*(n+1)/2;
    cout<<totalsum-sum;
    return 0;
}