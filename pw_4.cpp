#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    if ( a%5==0 || a%3==0)
    {
        cout<<"number is divisible by  5 or 3 ";
    }
    else
    {
        cout<<"number is not divisible by or 5 and 3 ";
    }
    return 0;
}