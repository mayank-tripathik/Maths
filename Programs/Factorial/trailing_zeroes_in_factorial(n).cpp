#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int trailing_zeroes(int num){
    int n_five,n_zeroes=0,i=1;
    while(1){
        n_five=floor(num/pow(5,i));
        if(n_five==0)
            break;
        n_zeroes+=n_five;
        i++;
    }
    return n_zeroes;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        cout<<trailing_zeroes(num)<<endl;
    }
}
