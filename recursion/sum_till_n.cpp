#include<iostream>
using namespace std;
class Solution{
    public:
    int sum(int n){
        if (n==1){
            return 1;
        }
        else{
            return (n + sum(n-1));
        }
    }
};
int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.sum(n);
}