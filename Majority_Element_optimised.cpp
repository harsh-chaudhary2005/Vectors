#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i-1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            
        }
        if (freq > n/2)
        {
            ans = nums[i];
            return ans;
        }
        
        
    }
    return -1;
}
int main(){
  vector<int> nums = {1, 2, 2, 2, 2, 1, 4, 5, 2, 7, 2, 2, 9};
  cout << "Majority Element is = " << majorityElement(nums)<< endl;
  return 0;
}