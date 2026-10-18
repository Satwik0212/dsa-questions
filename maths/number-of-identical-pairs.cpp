class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int x = nums.size();
        x++;
        int count = 0;
        int i = 0;
        while(i<nums.size()){
            int j = i+1;
        while( j<nums.size()){
            if(i<j && nums[i] == nums[j]){
            count++;
            }
             j++;}
        i++;}
        return count;
    }
};