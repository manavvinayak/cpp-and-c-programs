#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter a No. ";
    cin>>a;
    if ( a > 999 || a < 999)
    // condition is there that if a is less than or greater than 999 ,then it is not 3 digit number thats why logical "or" operator || is used!
    {
        cout<<"it is not a three digit number !";
    }
    else
    {
        cout<<"it is  a three digit number !";
    }
    return 0;
}