#include<iostream>
#include<cmath>
#include<cstdlib>
#include<climits>
using namespace std;

int multiply(int *fact, int mul, int size){
    int carry=0,product;
    for(int i=0;i<size;i++){
        product=mul*fact[i]+carry;
        fact[i]=product%10;
        carry=product/10;
    }
    while (carry)
    {
        fact[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}
void factorial(int num){
    int fact_size=1,fact[10000];
    fact[0]=1;
    for(int i=2;i<=num;i++){
        fact_size=multiply(fact,i,fact_size);
    }
    for(int i=fact_size-1;i>=0;i--){
        cout<<fact[i];
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        factorial(n);
        cout<<endl;  
    }       
}
