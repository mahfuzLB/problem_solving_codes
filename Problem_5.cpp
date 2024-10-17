#include<iostream>
using namespace std;

class Pair_count{
private:
    int n,m;
public:
    Pair_count(int n,int m){
        this-> n=n;
        this-> m=m;
    }
    void counting(){
        int range,count=0;
        range = n<m ? n : m ;
        if (1<=n,m<=1000){
            for(int a=0 ; a<=range ; a++ ){
                for (int b=0 ; b<=range ; b++){
                    if(a*a+b==n && a+b*b==m){
                        count++;
                    }
                }
            }
        }
        cout << count ;
    }
};

int main(){
    int n,m;
    cin >> n >> m ;
    Pair_count ob(n,m);
    ob.counting();

    return 0;
}
