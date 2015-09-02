#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t, counter = 1;
    cin>>t;
    while(t){
        int n, parity = 0;
        cin>>n;
        int remainder = n;
        while(remainder){
            parity++;
            int temp = log2(remainder);
            remainder = remainder - pow(2, temp);
        }
        if(parity % 2 == 0){
            cout<<"Case "<< counter <<": even"<<endl;
        }else{
            cout<<"Case "<< counter <<": odd"<<endl;
        }
        t--;
        counter++;
    }
}
