#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int len = str.length();
    bool found = false;
    for(int i=0; i<len; i++){
        if(str[i] == 'h'){
            for(int j=i+1; j<len; j++){
                if(str[j] == 'e'){
                    for(int k=j+1; k<len; k++){
                        if(str[k] == 'l'){
                            for(int l=k+1; l<len; l++){
                                if(str[l] == 'l'){
                                    for(int m=l+1; m<len; m++){
                                        if(str[m] == 'o'){
                                            found = true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(found){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
