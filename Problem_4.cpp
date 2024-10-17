#include<iostream>
using namespace std;

class Parmutation{
public:
    int n;
    Parmutation(int n){
        this->n=n;
    }
    void cheak_P(){
        int array[n];
        if(n%2==0 && n>0){
            for (int i=1; i<=n ; i+=2){
                array[i]=i+1;
                array[i+1]=i;
            }
            for (int i=1; i<=n ; i++){
                cout << array[i] << " " ;
            }
        }
        else{
            cout << "-1" ;
        }
    }

};

int main(){
    int n;
    cin >> n ;

    Parmutation ob(n);
    ob.cheak_P();

    return 0;
}