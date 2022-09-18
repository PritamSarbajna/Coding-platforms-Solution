class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1, maxHeight = INT_MIN;
        
        while(left < right){
            int curr = min(height[left], height[right]) * (right-left);
            
            maxHeight = max(maxHeight, curr);
            
            if(height[left] > height[right]){
                right--;
            }
            else if(height[left] == height[right]){
                left++;
                right--;
            }
            else{
                left++;
            }
        }
        return maxHeight;
    }
};
