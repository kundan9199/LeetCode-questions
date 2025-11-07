class Solution {
public:
    void swap(int& a,int& b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
    }

    void transpose(vector<vector<int>> &vec,int n){
        for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) swap(vec[i][j],vec[j][i]);
        return ;
    }
    void rotate(vector<vector<int>>& vec) {
        int n=vec.size();

    transpose(vec,n);

    int left=0;
    int right=n-1;
    while(left<right){

        for(int i=0;i<n;i++) swap(vec[i][left],vec[i][right]);
        
        left++;
        right--; 
    }

    }
};