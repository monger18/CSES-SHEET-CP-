#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char ch=s[0];
    long long count=0;
    long long maxm=0;
    for(size_t i=0;i<s.length();i++){
        if(s[i]==ch){
            count++;
        }else{
            maxm=max(count,maxm);
            count=1;
            ch=s[i];
        }
    }
    cout<<max(maxm,count);
    return 0;
}