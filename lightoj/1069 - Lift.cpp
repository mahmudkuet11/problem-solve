#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int counter = 1;
    while(t)
    {
        int pos, lift;
        cin>>pos>>lift;
        int come = lift - pos;
        come = come < 0 ? come*(-1) : come;
        come = come * 4;
        int go = pos * 4;
        int total = come + go + 3 + 5 + 3 + 3 + 5;
        cout<<"Case "<< counter <<": "<<total<<endl;
        counter++;
        t--;
    }
}
