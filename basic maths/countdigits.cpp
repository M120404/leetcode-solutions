#include <iostream>
using namespace std;
class Solution{
    public:
    int countDigit(int n){
        int count = 0;
        while (n>0){
            n = n/10;
            count++;
        }
        return count;
    }
}
int main{
    Solution obj;
    int n = 16790;
    cout<< obj.countDigit(n);
    return 0;
}
