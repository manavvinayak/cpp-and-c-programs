#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=1;z<=t;z++){
        int n,x;
        cin>>n>>x;
        vector<int>v(n+1,0);
        for(int i=1;i<n+1;i++) cin>>v[i];
        v[0]=0;
        int y=v[v.size()-1];
        int g=2*(x-y);
        int ans=g;
        for(int i=v.size()-1;i>=0;i--) v.push_back(v[i]);
        for(int i=1;i<v.size();i++){
            int h=v[i]-v[i-1];
            ans=max(ans,h);
        }
        cout<<ans<<endl;
    }
    return 0;
}