#include<iostream>
using namespace std;
class Solution{
    public:
    int gcd(int a, int b){
        if (b==0){
            return a;
        }
        return gcd(b,a%b);
    }
};
int main(){
    Solution obj;
    cout<<obj.gcd(100,200);
}