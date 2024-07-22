class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0) zero++;
            else if(nums[i]==1) one++;
            else if(nums[i]==2)two++;
        }
        for(int j = 0; j < zero; j++){
            nums[j] = 0;
        }
        for(int j = zero; j < zero+one;j++){
            nums[j] = 1;
        }
        for(int j = zero+one; j < zero+one+two; j++){
            nums[j] = 2;
        }
    }
};
