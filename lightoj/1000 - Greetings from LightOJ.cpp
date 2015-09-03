#include<iostream>
using namespace std;

int main(){
    int t, counter = 1;
    cin>>t;
    while(t){
        int a, b;
        cin>>a>>b;
        int result = a+b;
        cout<<"Case "<< counter <<": "<< result <<endl;
        t--;
        counter++;
    }
}
