#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int counter = 1;
    while(t)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(b > a)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        if(c > a)
        {
            int temp  =a;
            a = c;
            c = temp;
        }
        if(a*a == b*b + c*c)
        {
            cout<<"Case "<< counter <<": yes"<<endl;
        }
        else
        {
            cout<<"Case "<< counter <<": no"<<endl;
        }
        t--;
        counter++;
    }
}
