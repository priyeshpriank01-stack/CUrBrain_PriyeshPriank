#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, rem;
    vector<int> ans;

    cout << "Enter any number:";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        if(rem%2==0){
            ans.push_back(0);
        }else{
            ans.push_back(rem);
        }
        
        n /= 10;
    }

    for(int i = 0; i<ans.size()/2; i++){
        swap(ans[i], ans[ans.size()-1-i]);
    }

    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}