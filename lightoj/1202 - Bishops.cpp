#include<iostream>
using namespace std;

int main()
{
    int t, counter = 1;
    cin>>t;
    while(t)
    {
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;

        int diffCol = c2 - c1;
        diffCol = diffCol < 0 ? (diffCol * (-1)) : diffCol;
        int diffRow = r2 - r1;
        diffRow = diffRow < 0 ? (diffRow * (-1)) : diffRow;
        if(diffCol == diffRow)
        {
            cout<<"Case "<< counter <<": 1"<<endl;
        }
        else if(((r1+c1) % 2 == 0 && (r2+c2) % 2 == 0) || ((r1+c1) % 2 != 0 && (r2+c2) % 2 != 0))
        {
            cout<<"Case "<< counter <<": 2"<<endl;
        }
        else
        {
            cout<<"Case "<< counter <<": impossible"<<endl;
        }
        t--;
        counter++;
    }

}
