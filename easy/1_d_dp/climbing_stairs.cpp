class Solution {
public:
    int climbStairs(int n) {

        if(n==1) return n;

        int first = 0;
        int second = 1;

        for(int i=0; i<n; i++) {
            second = first+second;
            first = second-first;
        }

        return second;
    }
};
