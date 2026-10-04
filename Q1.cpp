#include<iostream>
using namespace std;

int main(){
    int n,i,rem,temp,digits=0;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    if (n<0){
        temp=-n;
        while(temp>0){
            temp=temp/10;
            digits++;
        }
    if (digits%2==0){
        cout<<"True"<<endl;
        cout<<"The minus sign is not a digit"<<endl;
        cout<<"The number has even number of digits"<<digits<<endl;
    }
    else{
        cout<<"False"<<endl;
        cout<<"The minus sign is not a digit"<<endl;
        cout<<"The number has odd number of digits:"<<digits<<endl;
    }    
    }
    else if (n>0){
    while(n>0){
        n = n/10;
        digits++;
    }

    if (digits%2==0){
        cout<<"True"<<endl;
        cout<<"The number has even number of digits:"<<digits<<endl;
    }
    else{
        cout<<"False"<<endl;
        cout<<"The number has odd number of digits:"<<digits<<endl;
    }
}
else{
    cout<<"False"<<endl;
    cout<<"The number has 1 digit"<<endl;
    }
    return 0;
}

