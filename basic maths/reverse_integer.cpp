#include<iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long reversed_number = 0; 
        
        while (x!=0){
            reversed_number = 10*reversed_number + (x%10);
            x=x/10;
        }
        if (reversed_number < INT_MIN || reversed_number > INT_MAX){
            return 0;
        }
        else{
            if (x<0){
            return -1*(int)reversed_number;
            }
            else{
                return (int)reversed_number;
            }
        }
    }
};
int main(){
    Solution obj;
    int x;
    cin>>x;
    cout<<obj.reverse(x);
}