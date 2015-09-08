#include<iostream>
using namespace std;
int get(int num);
int n, a[110];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bool first = true;
    for(int i=0; i<n; i++)
    {
        if(first)
        {
            cout<<get(i+1);
            first = false;
        }
        else
        {
            cout<<" "<<get(i+1);
        }

    }
}

int get(int num)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == num) return i+1;
    }
}
