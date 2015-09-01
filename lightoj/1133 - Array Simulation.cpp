#include<iostream>
using namespace std;

int main(){
    int t, counter = 1;
    cin>>t;
    while(t){
        int size, command;
        cin>>size>>command;
        int data[size];
        for(int i=0; i<size; i++){
            cin>>data[i];
        }
        for(int i=0; i<command; i++){
            char option;
            cin>>option;
            if(option == 'S'){
                int d;
                cin>>d;
                for(int j=0; j<size; j++){
                    data[j] = data[j] + d;
                }
            }
            if(option == 'M'){
                int d;
                cin>>d;
                for(int j=0; j<size; j++){
                    data[j] = data[j] * d;
                }
            }
            if(option == 'D'){
                int k;
                cin>>k;
                for(int j=0; j<size; j++){
                    data[j] = data[j] / k;
                }
            }
            if(option == 'R'){
                for(int i=0; i<size/2; i++){
                    int temp = data[i];
                    data[i] = data[size - 1 - i];
                    data[size - 1 - i] = temp;
                }
            }
            if(option == 'P'){
                int y, z;
                cin>>y>>z;
                int temp = data[y];
                data[y] = data[z];
                data[z] = temp;
            }
        }
        cout<<"Case "<< counter <<":"<<endl;
        for(int i=0; i<size; i++){
            cout<<data[i];
            if(i != size - 1){
                cout<<" ";
            }else{
                cout<<endl;
            }
        }
        t--;
        counter++;
    }
}
