#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin>>str;
    bool first = true;
    int one = 0, two = 0, three = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '1') one++;
        if(str[i] == '2') two++;
        if(str[i] == '3') three++;
    }
    for(int i=0; i<one; i++){
        if(first){
            cout<<1;
            first = false;
        }else{
            cout<<"+1";
        }
    }
    for(int i=0; i<two; i++){
        if(first){
            cout<<2;
            first = false;
        }else{
            cout<<"+2";
        }
    }
    for(int i=0; i<three; i++){
        if(first){
            cout<<3;
            first = false;
        }else{
            cout<<"+3";
        }
    }
}
