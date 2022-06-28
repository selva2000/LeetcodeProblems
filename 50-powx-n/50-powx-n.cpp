class Solution {
public:
    double myPow(double x, int n) {
        
        if(n == 0){
            return 1;
        }
        
        //rec case
        // return x * myPow(x, n-1);
        
        double small_ans = myPow(x, n/2);
        small_ans = small_ans * small_ans;
        
        if(n & 1){
            return n < 0 ? 1/x*small_ans : x*small_ans;
        } else {
            return small_ans;
        }
        
    }
};