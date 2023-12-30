class Solution {
public:
    double myPow(double x, int n) {
        if(x==1){
            return x;
        }
        if(n==0){
            return 1;
        }
        long p=abs(n);
        double res=myPow(x*x,p/2)*(p%2?x:1);
        return n>0?res:1/res;

    }
};