#include<iostream>
#include<vector>
#include<map>
using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
 

// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

 vector<int> twoSum(vector<int>& nums, int target) {
     
    map<int,int>map;
    int startIndex=0,endIndex=0;
    for(int i=0;i<nums.size();i++)
    {
        int key=(target-nums[i]);
        if(map.find(key)!=map.end())
        {
            endIndex=i;
            break;
        }
        map[nums[i]]=i;
       
    }
     int j=0;
      for (auto& pair : map) {
        if (pair.first ==(target-nums[endIndex]))
        {
            startIndex=pair.second;
            break;
        }
            j++;
        }
if(startIndex==endIndex)
{
    vector<int> a ={0,0};

    return a;
}
        vector<int>a={nums[startIndex],nums[endIndex]};

        return a;

    }

    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int numOfTrips=0;
        map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
        map[nums[i]]=nums[i]+diff;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            vector<int> a={nums[i]};
            if(map.find(nums[i]+diff)!= map.end())
            {
                if(map.find(nums[i]+diff+diff)!=map.end())
                {
                    numOfTrips++;
                }
            }

        }
return numOfTrips;
    }

    int main()
{vector<int>a={3,2,3};

twoSum(a,6);

}