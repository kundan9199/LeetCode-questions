class Solution {
public:
    int totalMoney(int n) {
        int m=1; 
        int ans =0;
        while(n>0){
            for(int i=0; i<7 && n-->0; i++){
                ans = ans+m+i;
            }
            m++;
        }
        return ans;
    }
};
