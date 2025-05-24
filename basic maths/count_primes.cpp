#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    int primes(int n){
        int count = 0;
        vector<bool> array(n,true);
        for (int i=2; i<n; i++){
            if (array[i]==true){
                for (int j = 1LL* i*i; i*i<n; j+=i){
                    array[j] = false;
                }
            }
        }
        for (int i=2; i<n; i++){
            if (array[i]==true){
                count++;
            }
        }
        return count;
    }
};
int main(){
    int n;
    cin>>n;
    Solution obj;
    cout<<obj.primes(n);
}