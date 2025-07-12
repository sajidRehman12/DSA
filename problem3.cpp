#include<iostream>
#include<vector>
using namespace std;
  int searchInsert(vector<int>& nums, int target) {
    int s=0, e=nums.size()-1,lastChanged=0;     
    if(target>nums[e])
        return e+1;

    if(target<nums[s])
        return s;
 
    while(s < e)
    {
        int mid=(s+e)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(target<nums[mid])
        {
            e=mid-1;
            lastChanged=e+1;

        }
         if(target>nums[mid])
        {
            s=mid+1;
            lastChanged=s-1;

        }
    }
    return e+1;

}
int main()
{vector <int >a={1,3,5,6};

    cout<<searchInsert(a,2);
}