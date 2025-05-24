#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> factors (int n){
        vector<int> array;
        for (int i=1; i<=n; i++){
            if (n%i==0){
                array.push_back(i);
            }
        }
        return array;
    }
};
int main(){
    Solution obj;
    int n;
    cin>>n;
    for (int x : obj.factors(n)){
        cout<<x<<" ";
    }
    
}