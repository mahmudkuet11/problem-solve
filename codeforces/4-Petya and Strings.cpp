#include<iostream>
#include<string>
using namespace std;

int main()
{

    string str1, str2;
    int val1 = 0, val2 = 0;
    cin>>str1>>str2;
    bool equal = true;
    for(int i=0; i<str1.length(); i++)
    {

        if(str1[i] >= 97)
        {
            str1[i] = str1[i] - 32;
        }
        if(str2[i] >= 97)
        {
            str2[i] = str2[i] - 32;
        }
        if(str1[i] > str2[i])
        {
            cout<<1;
            equal = false;
            break;
        }
        if(str1[i] < str2[i])
        {
            cout<<-1;
            equal = false;
            break;
        }
    }
    if(equal)
    {
        cout<<0;
    }
}
