#include <stdio.h>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int num = 0;
        std::vector<int> answer;

        for(int i=0; i < nums.size()-1; i++){
            num = nums[i];
            for(int j=i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
        return nums;
    }
};



