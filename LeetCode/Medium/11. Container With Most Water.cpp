class Solution {
public:
    int maxArea(vector<int>& height) {
        int ma = INT_MIN;
        int j = height.size()-1,i=0;
        while (i < j)
        {
            ma = max(ma,min(height[i],height[j])*(j-i));
            if (height[i] > height[j])
                j--;
            else
                i++;
        }
        return ma;
    }
};