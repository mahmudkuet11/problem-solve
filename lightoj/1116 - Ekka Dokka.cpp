#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int counter = 1;
    while(t){
        long long int w;
        cin>>w;
        if(w % 2 != 0){
            cout<<"Case "<< counter <<": Impossible"<<endl;
        }else{
            bool found = false;
            for(long long int i=2; i<w/2; i=i+2){
                if(w % i == 0 && (w/i) % 2 != 0){
                    found = true;
                    cout<<"Case "<< counter <<": "<< w/i <<" "<<i<<endl;
                    break;
                }
            }
            if(!found){
                cout<<"Case "<< counter <<": Impossible"<<endl;
            }
        }
        t--;
        counter++;
    }
}
