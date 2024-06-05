#include<iostream>
#include <conio.h>


using namespace std;

int main(){
    int marks[] = {12,5,8,26,24}; // out of 30, initialising array of size 5
        marks[2]= 21; // we  can change the value 
    cout<<"DSA="<<marks[0]<<endl;
    cout<<"DEC="<<marks[1]<<endl;
    cout<<"Maths="<<marks[2]<<endl;
    cout<<"OOPs="<<marks[3]<<endl;
    cout<<"CLE="<<marks[4]<<endl;
    for (int i=0;i<=4;i++)
    {
        cout<<"The value of subject "<<i<<" is "<<marks[i]<<endl; 
    }
    getch();
    return 0;
}