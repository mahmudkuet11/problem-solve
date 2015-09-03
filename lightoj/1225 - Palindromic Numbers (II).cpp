#include<iostream>
#include <string>
#include <sstream>
#include<cstdio>
using namespace std;

int main(){
    int t, counter = 1;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        ostringstream convert;
        convert << num;
        string str = convert.str();
        int len = str.length();
        bool palindrom = true;
        for(int i=0; i<len/2; i++){
            if(str[i] != str[len-i-1]){
                palindrom = false;
                break;
            }
        }
        if(palindrom){
            printf("Case %d: Yes\n", counter++);
        }else{
            printf("Case %d: No\n", counter++);
        }
    }
}
