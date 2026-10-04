#include<iostream>
using namespace std;

int main(){
    int n,rem,sum = 0,product = 1;

cout<<"Enter any number:"<<endl;
cin>>n;

if(n>0){
while(n>0){
    rem = n%10;
    sum = sum + rem;
    product = product * rem;
    n=n/10;
}
cout<<"The difference between the product and sum of digits is:"<<product-sum<<endl;
}
else{
    cout<<"Invalid Input"<<endl;
}
return 0;
}