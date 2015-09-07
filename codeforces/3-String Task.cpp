#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
    string sentence;
    cin>>sentence;
    int len = sentence.length();
    for(int i=0; i<len; i++){
        if(sentence[i] != 'A' && sentence[i] != 'a' && sentence[i] != 'E' && sentence[i] != 'e' && sentence[i] != 'I' && sentence[i] != 'i' && sentence[i] != 'O' && sentence[i] != 'o' && sentence[i] != 'U' && sentence[i] != 'u' && sentence[i] != 'Y' && sentence[i] != 'y'){
            cout<<".";
            if(sentence[i] >= 65 && sentence[i] <=96){
                printf("%c", sentence[i] + 32);
            }else{
                cout<<sentence[i];
            }
        }
    }
}
