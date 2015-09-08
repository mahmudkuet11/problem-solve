#include<iostream>
using namespace std;

int main(){
    int n, coins[110], sum = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>coins[i];
        sum += coins[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1;j<n; j++){
            if(coins[i] > coins[j]){
                int temp = coins[i];
                coins[i] = coins[j];
                coins[j] = temp;
            }
        }
    }
    int counter = 0;
    int total = 0;
    for(int i=n-1; i>=0; i--){
        total += coins[i];
        counter++;
        if(total > (sum-total)){
            cout<<counter;
            break;
        }
    }
}
