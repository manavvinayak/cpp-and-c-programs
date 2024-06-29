#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three positive integers:"<<endl;
    cin>>a >>b >> c ;
    if ( a > b && a>c )
    cout<<"the number "<<a << " is maximum"<<endl;
    if ( b > a && b > c)
    {
        cout<<b << " is maximum"<<endl;
    } 
    if ( c>a && c>b)
    {
        cout<<c << " is maximum"<<endl;
    }
    
    return 0;
}