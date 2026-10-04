#include <iostream>
using namespace std;

int main(){
    int a, b, n,counta=0,countb=0;
    int digit;
    cout << "Enter a number:";
    cin>>n;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    if (n==0){
        if (a==0){
            counta++;
        }
        if (b==0){
            countb++;
        }
    }
    else{
        while(n>0){
            digit = n%10;
            if (digit == a){
                counta++;
            }
            if (digit == b){
                countb++;
            }
            n = n/10;
        }
        cout<<"The difference is:"<<abs(counta - countb)<<endl;
    }
    return 0;
}