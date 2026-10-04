#include<iostream>
using namespace std;

int main(){
    int n,temp,rem,rev=0,count;
    int sumP = 0,sumN = 0;

cout<<"Enter any number:"<<endl;
cin>>n;
temp = n;
if(n<0){
    count = -n;
    while(count>0){
    rem = count%10;
    rev = rev*10 + rem;
    count = count/10;
}
if (rev == temp){
    cout<<"The number is a palindrome number:"<<-rev<<endl;
}
else{
    cout<<"The number is not a palindrome number:"<<-rev<<endl;
}
sumN = temp + (-rev);
cout<<"the sum of the number and its reversed value is:"<<sumN<<endl;
}
else{
while(n>0){
    rem = n%10;
    rev = rev*10 + rem;
    n = n/10;
}

if (rev == temp){
    cout<<"The number is a palindrome number:"<<rev<<endl;
}
else{
    cout<<"The number is not a palindrome number:"<<rev<<endl;
}
sumP = temp + rev;
cout<<"the sum of the number and its reversed value is:"<<sumP<<endl;
}
return 0;    
}