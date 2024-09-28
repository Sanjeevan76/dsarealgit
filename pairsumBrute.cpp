#include<iostream>
#include<vector>
using namespace std;


//time complexcity o(n2)
vector<int> pairsum(vector<int>nums,int target)
{
    vector<int>ans;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;i++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums= {2,7,11,13};
    int target=9;
    vector<int>ans=pairsum(nums,target);
    cout<<ans[0]<<" "<< ans[1] <<endl;
    return 0;
}