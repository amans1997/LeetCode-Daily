class Solution {
public:
    int kthFactor(int n, int k) {
        
        if (k>n){
            return -1;
        }
        vector <int> s;
        for (int i=1;i<=n;i++){
            if(n%i==0){
                s.push_back(i);
                // printf("%d",i);
            }
        }
        if (s.size()<k){
            return -1;
        }
        else {return s[k-1];}
    }
};
