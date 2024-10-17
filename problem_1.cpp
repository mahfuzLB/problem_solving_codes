#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0,check,sur;
    cin >> n ;
    int array[n][3];
    for(int i=0; i<n ;i++){
        for(int j=0; j<3 ;j++ ){
            cin >> sur ;

            array[i][j]=sur;
        }
    }
    
    for(int i=0; i<n ;i++){
        check=0;
        for(int j=0; j<3 ;j++ ){
            check += array[i][j] ;
        }
        if (check>=2){
            count++;
        }
    }
    cout << count ; 
    
    return 0;
}