class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()>1){
            int j=nums.size()-1;
            while(j>0 && nums[j]<=nums[j-1]){
                j-=1;
            }
            if(j!=0){
                j--;
            }
            else{
                j=0;
            }
            cout<<j;  
            int m=5464365;
            int k=0;
            int f=0;
            for(int i=j;i<nums.size();i++){
                if(nums[i]>nums[j] && nums[i]<=m){
                    k=i;
                    m=nums[i];
                    f=1;
                }
            } 
            cout<<f;
            cout<<k;
            if(f==0){
                reverse(nums.begin(),nums.end());
            }
            else{
                swap(nums[j],nums[k]);
                reverse(nums.begin()+j+1,nums.end());
            }       }
}
};