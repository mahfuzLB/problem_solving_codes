#include<iostream>
using namespace std;

int main(){
    int s1,s2,s3,s4;
    cin >> s1 >> s2 >> s3 >> s4 ;
    int array[4];
    array[0]=s1;
    array[1]=s2;
    array[2]=s3;
    array[3]=s4;
    int count=0;

    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(count>=2)
            break;
    }
    
    cout << count ;

    return 0;
}