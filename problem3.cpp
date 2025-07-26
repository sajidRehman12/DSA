#include<iostream>
#include<vector>
#include<queue>
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
    if(nums[e]>target||nums[e]==target)
     return e;
    else{
    
    return e+1;
}
}



string makeFancyString(string s) {

int j=1;
string c= s[0];
string ns;
for(int i =1;i<s.size();i++)
{
    
    if((s[i]==c)&&(j<3))
    {
        ns=ns+c;
        j++;    
    }
    else
    {
        j=1;
        c=s[i];
    }

}
return ns;

}
int main()
{vector <int >a={1,3,5,6};

    cout<<makeFancyString("aaabaaa");
}