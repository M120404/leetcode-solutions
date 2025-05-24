#include<iostream>
using namespace std;
class Solution{
    public:
    int factorial(int n){
        if (n==0 || n==1){
            return 1;
        }
        else{
            return (n*factorial(n-1));
        }
    }
};
int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.factorial(n);
}