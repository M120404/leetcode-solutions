#include<iostream>
#include <climits>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long long reversed_number = 0; 
        int y = x;
        if (x<0){
            return false;
        }
        while (x>0){
            reversed_number = 10*reversed_number + (x%10);
            x = x/10;
        }
        if (y == reversed_number){
            return true;
        }
        return false;
    }
};
int main(){
    Solution obj;
    int x;
    cin>>x;
    cout<<obj.isPalindrome(x);
}