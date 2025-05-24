    #include <iostream>
    #include <cmath>
    using namespace std;
    class Solution{
        public:
        int length(int n){
            int y = abs(n);
            int count=0;
            while (y>0){
                count++;
                y=y/10;
            }
            return count;
        }
        bool armstrong(int n){
            int x = abs(n);
            int l = length(x);
            int sum=0;
            while (n>0){
                sum+=pow((n%10),l);
                n=n/10;
            }
            if (x==sum){
                return true;
            }
            return false;
        }
    };
    int main(){
        Solution obj;
        int n;
        cin>>n;
        cout<<obj.length(n);
        if (obj.armstrong(n)){
            cout<<"True";
        }
        cout<<"False";
    }