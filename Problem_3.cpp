#include<iostream>
using namespace std;

int main(){
    string name;
    getline (cin, name);
    int Count=name.length();

    for (int i=0; i< name.length() ; i++){
        for(int j=i+1 ; j<name.length() ; j++){
            if(name[i]==name[j]){
                Count--;
                break;
            }
        }
    }
    if(Count%2==0){
        cout << "CHAT WITH HER!" ;
    }
    else{
        cout << "IGNORE HIM!" ;
    }
    return 0;
}
