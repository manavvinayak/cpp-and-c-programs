#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<limits.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int ii=0;ii<t;ii++){
        int len=0;
        string s;
        cin>>s;
        for(int i=0;i<5;i++){
            if(s[i]=='A') len++;
        }
        if(len>=3) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}