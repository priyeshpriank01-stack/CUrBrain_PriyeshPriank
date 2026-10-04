#include<iostream>
using namespace std;

int reverse_and_double(int n){
    int rem,rev=0,temp;
    if (n>0){
    while(n>0){
    rem = n%10;
    rev = rev * 10 + rem;
    n = n/10;
    }
}
    else{
        temp = -n;
        while(temp>0){
            rem = temp%10;
            rev = rev * 10 - rem;
            temp = temp/10;
        }
    }

    return rev * 2;
}
    int main(){
        int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    cout<<reverse_and_double(n)<<endl; 
    }