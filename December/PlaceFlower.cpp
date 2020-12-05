class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i =0 , count=0;
        while(i<flowerbed.size()) {
            if(flowerbed[i]==0 &&(i==0 || flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1] ==0))
            {
                flowerbed[i] =1;
                count++;
                if(count == n) break;
            }
            i++;
        }
        return count>=n;
    }
};