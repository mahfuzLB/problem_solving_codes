#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    char max=0;
    int count;
    for(int i=0;i<s.length();i++){
        if(max<s[i]){
            count=1;
            max = s[i];
        }
        else if(max==s[i]){
            count++;
        }
    }
    for(int i=1 ; i<=count ;i++ ){
        cout << max ;
    }

    return 0;
}