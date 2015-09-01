#include<iostream>
#include<stack>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int counter = 1;
    while(t)
    {
        stack<string> backStack, forwardStack;
        string current = "http://www.lightoj.com/";
        string command;
        cout<<"Case "<< counter <<":"<<endl;
        while(true)
        {
            cin>>command;

            if(command == "VISIT")
            {
                backStack.push(current);
                cin>>current;
                while(!forwardStack.empty())
                {
                    forwardStack.pop();
                }
                cout<<current<<endl;
            }
            if(command == "BACK")
            {
                if(backStack.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    forwardStack.push(current);
                    current = backStack.top();
                    cout<<current<<endl;
                    backStack.pop();
                }
            }
            if(command == "FORWARD")
            {
                if(forwardStack.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    backStack.push(current);
                    current = forwardStack.top();
                    forwardStack.pop();
                    cout<<current<<endl;
                }
            }
            if(command == "QUIT"){
                break;
            }

        }
        counter++;
        t--;
    }

}
