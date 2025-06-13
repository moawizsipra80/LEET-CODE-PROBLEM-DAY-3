#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) 
    {
     for(int i=0;i<nums.size()-1;i++)
     {
        if(nums[i]==nums[i+1])
        {
           nums[i]=nums[i]*2;
            nums[i+1]=0;
        }
           else
        {
        continue;

        }

       
     }
     int write = 0;
for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != 0) 
    {
        nums[write++] = nums[i];

    }
}
while (write < nums.size()) 
{
    nums[write++] = 0;
}
        return nums; 

}};
int main()
{
int size;
cout<<"hjow many elents u want to add"<<endl;
cin>>size;
vector<int>n(size);
cout<<"enter numbers one my one"<<endl;
for(int i=0;i<=size;i++)
{
   cin>>n[i];
}
Solution s1;
s1.applyOperations(n);
for(int i=0;i<size;i++)
{
cout<<n[i]<<" "<<endl;
}
}